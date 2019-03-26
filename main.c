#include <driverlib.h>
#include "Board.h"
#include "stdarg.h"
#define TIMER_PERIOD 80

void putc(unsigned);
void puts(char *);

static const unsigned long dv[] = {
//  4294967296      // 32 bit unsigned max
   1000000000,     // +0
    100000000,     // +1
     10000000,     // +2
      1000000,     // +3
       100000,     // +4
//       65535      // 16 bit unsigned max
        10000,     // +5
         1000,     // +6
          100,     // +7
           10,     // +8
            1,     // +9
};

static void xtoa(unsigned long x, const unsigned long *dp)
{
   char c;
   unsigned long d;
   if(x) {
       while(x < *dp) ++dp;
       do {
           d = *dp++;
           c = '0';
           while(x >= d) ++c, x -= d;
           putc(c);
       } while(!(d & 1));
   } else
       putc('0');
}

static void puth(unsigned n)
{
   static const char hex[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
   putc(hex[n & 15]);
}

void printf(char *format, ...)
{
   char c;
   int i;
   long n;

   va_list a;
   va_start(a, format);
   while(c = *format++) {
       if(c == '%') {
           switch(c = *format++) {
               case 's':                       // String
                   puts(va_arg(a, char*));
                   break;
               case 'c':                       // Char
                   putc(va_arg(a, char));
                   break;
               case 'i':                       // 16 bit Integer
               case 'u':                       // 16 bit Unsigned
                   i = va_arg(a, int);
                   if(c == 'i' && i < 0) i = -i, putc('-');
                   xtoa((unsigned)i, dv + 5);
                   break;
               case 'l':                       // 32 bit Long
               case 'n':                       // 32 bit uNsigned loNg
                   n = va_arg(a, long);
                   if(c == 'l' &&  n < 0) n = -n, putc('-');
                   xtoa((unsigned long)n, dv);
                   break;
               case 'x':                       // 16 bit heXadecimal
                   i = va_arg(a, int);
                   puth(i >> 12);
                   puth(i >> 8);
                   puth(i >> 4);
                   puth(i);
                   break;
               case 0: return;
               default: goto bad_fmt;
           }
       } else
bad_fmt:    putc(c);
   }
   va_end(a);
}

void putc(unsigned datachar)
{
    volatile uint8_t k;
    UCA0TXBUF = datachar ;
    for(k=10; k>0; k--);

}

int main(void) {

    volatile uint32_t z;
    volatile uint8_t t;

    // Stop watchdog timer
    WDT_A_hold(WDT_A_BASE);
    // eUSCI_A0 support
    P1SEL1 &= ~(BIT4 | BIT5);
    P1SEL0 |= BIT4|BIT5;
    t = 0;

    // Set P1.0 to output direction
    GPIO_setAsOutputPin( GPIO_PORT_P1, GPIO_PIN_LED1 + GPIO_PIN_LED2 );
    GPIO_setAsOutputPin( GPIO_PORT_P1, GPIO_PIN_LED1 + GPIO_PIN_LED2 );
    GPIO_setOutputHighOnPin(GPIO_PORT_P1, GPIO_PIN_LED1); // GPIO_PIN0 MSP430F2433
    GPIO_setOutputLowOnPin(GPIO_PORT_P1, GPIO_PIN_LED2); //  GPIO_PIN1 MSP430F2433
    // Initialize eUSCI_A0
//    http://processors.wiki.ti.com/index.php/USCI_UART_Baud_Rate_Gen_Mode_Selection


    EUSCI_A_UART_initParam param115200 = {0};
      param115200.selectClockSource = EUSCI_A_UART_CLOCKSOURCE_SMCLK;
      param115200.clockPrescalar = 8;
      param115200.firstModReg = 0;
      param115200.secondModReg = 0xD6;
      param115200.parity = EUSCI_A_UART_NO_PARITY;
      param115200.msborLsbFirst = EUSCI_A_UART_LSB_FIRST;
      param115200.numberofStopBits = EUSCI_A_UART_ONE_STOP_BIT;
      param115200.uartMode = EUSCI_A_UART_MODE;
      param115200.overSampling = EUSCI_A_UART_LOW_FREQUENCY_BAUDRATE_GENERATION;

    EUSCI_A_UART_initParam param9600 = {0};
      param9600.selectClockSource = EUSCI_A_UART_CLOCKSOURCE_SMCLK;
      param9600.clockPrescalar = 6; //  9600 bps parameters
      param9600.firstModReg = 14;   //  9600 bps parameters
      param9600.secondModReg = 16;  // 9600 bps parameters
      param9600.parity = EUSCI_A_UART_NO_PARITY;
      param9600.msborLsbFirst = EUSCI_A_UART_LSB_FIRST;
      param9600.numberofStopBits = EUSCI_A_UART_ONE_STOP_BIT;
      param9600.uartMode = EUSCI_A_UART_MODE;
      param9600.overSampling = EUSCI_A_UART_OVERSAMPLING_BAUDRATE_GENERATION;

    EUSCI_A_UART_init(EUSCI_A0_BASE, &param115200);
    EUSCI_A_UART_enable(EUSCI_A0_BASE);
    EUSCI_A_UART_resetDormant(EUSCI_A0_BASE);
    EUSCI_A_UART_enableInterrupt(EUSCI_A0_BASE, EUSCI_A_UART_TRANSMIT_INTERRUPT | EUSCI_A_UART_RECEIVE_INTERRUPT);


        __enable_interrupt();

    // Disable the GPIO power-on default high-impedance mode
    // to activate previously configured port settings
    PMM_unlockLPM5();


    char *s;
    char c;
    int i;
    unsigned u;
    long int l;
    long unsigned n;
    unsigned x;




    while(1)
    {
        // Toggle P1.0 output
        GPIO_toggleOutputOnPin(  GPIO_PORT_P1, GPIO_PIN_LED1 + GPIO_PIN_LED2 );


        printf("%s", "\r\n*** printf() test ***\r\n");

        s = "test";
        c = 'X';
        i = -12345;
        u =  12345;
        l = -1234567890;
        n =  1234567890;
        x = 0xABCD;

        printf("String        %s\r\n", s);
        printf("Char          %c\r\n", c);
        printf("Integer       %i\r\n", i);
        printf("Unsigned      %u\r\n", u);
        printf("Long          %l\r\n", l);
        printf("uNsigned loNg %n\r\n", n);
        printf("heX           %x\r\n", x);

        printf("multiple args %s %c %i %u %l %n %x\r\n", s, c, i, u, l, n, x);

        printf("\r\n*** Done ***\r\n");
    }
}

// ISR
#if defined(__TI_COMPILER_VERSION__) || defined(__IAR_SYSTEMS_ICC__)
#pragma vector=USCI_A0_VECTOR
__interrupt void USCI_A0_ISR(void)
#elif defined(__GNUC__)
void __attribute__ ((interrupt(USCI_A0_VECTOR))) USCI_A0_ISR (void)
#else
#error Compiler not supported!
#endif
{
  switch(__even_in_range(UCA0IV,USCI_UART_UCTXCPTIFG))
  {
    case USCI_NONE: break;
    case USCI_UART_UCRXIFG:
      P1OUT |= BIT0; // Switch on red LED when byte received; TX vector will switch it off, it should be a short flicker
      while(UCA0STATW&UCBUSY); // Busy-waits inside ISR is bad code, but this is a stupid simple example
      UCA0TXBUF = UCA0RXBUF+1;
      __no_operation();
      break;
    case USCI_UART_UCTXIFG:
      P1OUT &= ~BIT0;
      break;
    case USCI_UART_UCSTTIFG: break;
    case USCI_UART_UCTXCPTIFG: break;
    default: break;
  }
}

