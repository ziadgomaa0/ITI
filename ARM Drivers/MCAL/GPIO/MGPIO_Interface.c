/*
AUTHER : Ziad Gomaa 
Date : 9 sep 2023
*/


#ifndef MGPIO_INTERFACE_H
#define MGPIO_INTERFACE_H

#define PORTA 0
#define PORTB 1
#define PORTC 2

/*pins*/ 
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
#define PIN8 8
#define PIN9 9
#define PIN10 10
#define PIN11 11
#define PIN12 12
#define PIN13 13
#define PIN14 14
#define PIN15 15

/*
@fn			-MCAL_GPIO_Init
@brief 		-write on specfic port
@param [in]  -GPIO where x can be (a,,,or g to select peripheral
@param [in]  -PinNumber: specfied the port bit to read. set by @ref GPIO_PINS_defie
@param [in]  Value: PinValue
@reterval 	-Null
-Note 		-NULL
*/
//i'will pass the port&mode&PIN
// we have 4 speeds - low med high vhigh

#define INPUT   0
#define OUTPUT  1
#define ALT_FUN 2
#define ANALOG  3

/*type macros*/
#define OUT_PUSH_PULL   0
#define OUT_OPEN_DRAIN  1

/*speed speed*/
#define OUTPUT_LOW    0
#define OUTPUT_MED    1  
#define OUTPUT_HIGH   2
#define OUTPUT_VHIGH  3


/* input modes */
#define NO_PULL_UP_DOWN 0
#define PULL_UP         1
#define PULL_DOWN       2



#define GPIO_MODE_MASK     3


void MGPIO_SetMode(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8Mode);
void MGPIO_SetOutputPinMode(u8 Copy_u8Port,u Copy_u8Pin, u8 Copy_u8OutType, u8 Copy_u8speed); // fadel l speed
void MGPIO_SetInputPinMode(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8InputMode);
void MGPIO_GetPinValue(u8 Copy_u8Port,u Copy_u8Pin,u8 *Copy_pu8); // pointer to integer 3shan lw 3awz trg3 inetger 
void MGPIO_SetPinValue(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8Data);
void MGPIO_SetResetValue(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8SetorReset);









#endif 