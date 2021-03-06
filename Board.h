
#ifndef __BOARD_H__
#define __BOARD_H__

#ifdef __MSP430FR4133__

#define GPIO_PORT_LED1          GPIO_PORT_P1
#define GPIO_PIN_LED1           GPIO_PIN0
#define GPIO_PORT_LED2          GPIO_PORT_P4
#define GPIO_PIN_LED2           GPIO_PIN0
#define GPIO_PORT_S1            GPIO_PORT_P1
#define GPIO_PIN_S1             GPIO_PIN2

#define GPIO_PORT_ADC7          GPIO_PORT_P1
#define GPIO_PIN_ADC7           GPIO_PIN7
#define GPIO_FUNCTION_ADC7      GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_MCLK          GPIO_PORT_P1
#define GPIO_PIN_MCLK           GPIO_PIN4
#define GPIO_FUNCTION_MCLK      GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_SMCLK         GPIO_PORT_P8
#define GPIO_PIN_SMCLK          GPIO_PIN0
#define GPIO_FUNCTION_SMCLK     GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_ACLK          GPIO_PORT_P8
#define GPIO_PIN_ACLK           GPIO_PIN1
#define GPIO_FUNCTION_ACLK      GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_UCA0TXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0TXD        GPIO_PIN0
#define GPIO_FUNCTION_UCA0TXD   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCA0RXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0RXD        GPIO_PIN1
#define GPIO_FUNCTION_UCA0RXD   GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_UCB0SCL       GPIO_PORT_P5
#define GPIO_PIN_UCB0SCL        GPIO_PIN3
#define GPIO_FUNCTION_UCB0SCL   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCB0SDA       GPIO_PORT_P5
#define GPIO_PIN_UCB0SDA        GPIO_PIN2
#define GPIO_FUNCTION_UCB0SDA   GPIO_PRIMARY_MODULE_FUNCTION

#endif // __MSP430FR4133__

#ifdef __MSP430FR2311__

#define GPIO_PORT_LED1          GPIO_PORT_P1
#define GPIO_PIN_LED1           GPIO_PIN0
#define GPIO_PORT_LED2          GPIO_PORT_P2
#define GPIO_PIN_LED2           GPIO_PIN0
#define GPIO_PORT_S1            GPIO_PORT_P1
#define GPIO_PIN_S1             GPIO_PIN1

#define GPIO_PORT_ADC7          GPIO_PORT_P1
#define GPIO_PIN_ADC7           GPIO_PIN7
#define GPIO_FUNCTION_ADC7      GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_MCLK          GPIO_PORT_P2
#define GPIO_PIN_MCLK           GPIO_PIN6
#define GPIO_FUNCTION_MCLK      GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_SMCLK         GPIO_PORT_P1
#define GPIO_PIN_SMCLK          GPIO_PIN0
#define GPIO_FUNCTION_SMCLK     GPIO_SECONDARY_MODULE_FUNCTION
#define GPIO_PORT_ACLK          GPIO_PORT_P1
#define GPIO_PIN_ACLK           GPIO_PIN1
#define GPIO_FUNCTION_ACLK      GPIO_SECONDARY_MODULE_FUNCTION

#define GPIO_PORT_UCA0TXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0TXD        GPIO_PIN7
#define GPIO_FUNCTION_UCA0TXD   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCA0RXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0RXD        GPIO_PIN6
#define GPIO_FUNCTION_UCA0RXD   GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_UCB0SCL       GPIO_PORT_P1
#define GPIO_PIN_UCB0SCL        GPIO_PIN3
#define GPIO_FUNCTION_UCB0SCL   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCB0SDA       GPIO_PORT_P1
#define GPIO_PIN_UCB0SDA        GPIO_PIN2
#define GPIO_FUNCTION_UCB0SDA   GPIO_PRIMARY_MODULE_FUNCTION

#endif // __MSP430FR2311__

#ifdef __MSP430FR2433__

#define GPIO_PORT_LED1          GPIO_PORT_P1
#define GPIO_PIN_LED1           GPIO_PIN0
#define GPIO_PORT_LED2          GPIO_PORT_P1
#define GPIO_PIN_LED2           GPIO_PIN1
#define GPIO_PORT_S1            GPIO_PORT_P2
#define GPIO_PIN_S1             GPIO_PIN3
#define GPIO_PORT_S2            GPIO_PORT_P2
#define GPIO_PIN_S2             GPIO_PIN7

#define GPIO_PORT_ADC7          GPIO_PORT_P1
#define GPIO_PIN_ADC7           GPIO_PIN7
#define GPIO_FUNCTION_ADC7      GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_MCLK          GPIO_PORT_P1
#define GPIO_PIN_MCLK           GPIO_PIN3
#define GPIO_FUNCTION_MCLK      GPIO_SECONDARY_MODULE_FUNCTION
#define GPIO_PORT_SMCLK         GPIO_PORT_P1
#define GPIO_PIN_SMCLK          GPIO_PIN7
#define GPIO_FUNCTION_SMCLK     GPIO_SECONDARY_MODULE_FUNCTION
#define GPIO_PORT_ACLK          GPIO_PORT_P2
#define GPIO_PIN_ACLK           GPIO_PIN2
#define GPIO_FUNCTION_ACLK      GPIO_SECONDARY_MODULE_FUNCTION

#define GPIO_PORT_UCA0TXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0TXD        GPIO_PIN4
#define GPIO_FUNCTION_UCA0TXD   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCA0RXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0RXD        GPIO_PIN5
#define GPIO_FUNCTION_UCA0RXD   GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_UCB0SCL       GPIO_PORT_P1
#define GPIO_PIN_UCB0SCL        GPIO_PIN3
#define GPIO_FUNCTION_UCB0SCL   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCB0SDA       GPIO_PORT_P1
#define GPIO_PIN_UCB0SDA        GPIO_PIN2
#define GPIO_FUNCTION_UCB0SDA   GPIO_PRIMARY_MODULE_FUNCTION

#endif // __MSP430FR2433__

#ifdef __MSP430FR2355__

#define GPIO_PORT_LED1          GPIO_PORT_P1
#define GPIO_PIN_LED1           GPIO_PIN0
#define GPIO_PORT_LED2          GPIO_PORT_P6
#define GPIO_PIN_LED2           GPIO_PIN6
#define GPIO_PORT_S1            GPIO_PORT_P4
#define GPIO_PIN_S1             GPIO_PIN1
#define GPIO_PORT_S2            GPIO_PORT_P2
#define GPIO_PIN_S2             GPIO_PIN3

#define GPIO_PORT_ADC7          GPIO_PORT_P1
#define GPIO_PIN_ADC7           GPIO_PIN7
#define GPIO_FUNCTION_ADC7      GPIO_TERNARY_MODULE_FUNCTION

#define GPIO_PORT_XIN           GPIO_PORT_P2
#define GPIO_PIN_XIN            GPIO_PIN_P7
#define GPIO_FUNCTION_XIN       GPIO_SECONDARY_MODULE_FUNCTION
#define GPIO_PORT_XOUT          GPIO_PORT_P2
#define GPIO_PIN_XOUT           GPIO_PIN_P6
#define GPIO_FUNCTION_XOUT      GPIO_SECONDARY_MODULE_FUNCTION

#define GPIO_PORT_MCLK          GPIO_PORT_P3
#define GPIO_PIN_MCLK           GPIO_PIN0
#define GPIO_FUNCTION_MCLK      GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_SMCLK         GPIO_PORT_P3
#define GPIO_PIN_SMCLK          GPIO_PIN4
#define GPIO_FUNCTION_SMCLK     GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_ACLK          GPIO_PORT_P1
#define GPIO_PIN_ACLK           GPIO_PIN1
#define GPIO_FUNCTION_ACLK      GPIO_SECONDARY_MODULE_FUNCTION

#define GPIO_PORT_UCA0TXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0TXD        GPIO_PIN7
#define GPIO_FUNCTION_UCA0TXD   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCA0RXD       GPIO_PORT_P1
#define GPIO_PIN_UCA0RXD        GPIO_PIN6
#define GPIO_FUNCTION_UCA0RXD   GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_UCB0SCL       GPIO_PORT_P1
#define GPIO_PIN_UCB0SCL        GPIO_PIN3
#define GPIO_FUNCTION_UCB0SCL   GPIO_PRIMARY_MODULE_FUNCTION
#define GPIO_PORT_UCB0SDA       GPIO_PORT_P1
#define GPIO_PIN_UCB0SDA        GPIO_PIN2
#define GPIO_FUNCTION_UCB0SDA   GPIO_PRIMARY_MODULE_FUNCTION

#define GPIO_PORT_SACOA0O       GPIO_PORT_P1
#define GPIO_PIN_SACOA0O        GPIO_PIN1
#define GPIO_FUNCTION_SACOA0O   GPIO_TERNARY_MODULE_FUNCTION
#define GPIO_PORT_SACOA0N       GPIO_PORT_P1
#define GPIO_PIN_SACOA0N        GPIO_PIN2
#define GPIO_FUNCTION_SACOA0N   GPIO_TERNARY_MODULE_FUNCTION
#define GPIO_PORT_SACOA0P       GPIO_PORT_P1
#define GPIO_PIN_SACOA0P        GPIO_PIN3
#define GPIO_FUNCTION_SACOA0P   GPIO_TERNARY_MODULE_FUNCTION

#define GPIO_PORT_SACOA2O       GPIO_PORT_P3
#define GPIO_PIN_SACOA2O        GPIO_PIN1
#define GPIO_FUNCTION_SACOA2O   GPIO_TERNARY_MODULE_FUNCTION
#define GPIO_PORT_SACOA2N       GPIO_PORT_P3
#define GPIO_PIN_SACOA2N        GPIO_PIN2
#define GPIO_FUNCTION_SACOA2N   GPIO_TERNARY_MODULE_FUNCTION
#define GPIO_PORT_SACOA2P       GPIO_PORT_P3
#define GPIO_PIN_SACOA2P        GPIO_PIN3
#define GPIO_FUNCTION_SACOA2P   GPIO_TERNARY_MODULE_FUNCTION

#define GPIO_PORT_COMP0O        GPIO_PORT_P2
#define GPIO_PIN_COMP0O         GPIO_PIN0
#define GPIO_FUNCTION_COMP0O    GPIO_SECONDARY_MODULE_FUNCTION

#endif // __MSP430FR2355__

#endif // __BOARD_H__

