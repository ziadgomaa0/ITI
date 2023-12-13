/*
auther : ziad gomaa
date : 13 sep 2023
*/


#include "../include/BIT_MATH.h"
#include "../include/STD_Types.h"
#include "../include/MGPIO_Interface.h"
#include "../include/MSTK_Interface.h"
#include "../include/HR2RDAC_Interface.h"
#include "../include/HR2RDAC_private.h"
#include "../include/HR2RDAC_Configurations.h"

/*@fn			HR2RDAC_voidInit
@brief 		-Intialzing DAC using R2R method, ports directions and types 
@param [in]  void
@reterval 	-Null
-Note 		-NULL
*/


void HR2RDAC_voidInit(void)
{
   MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN0 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN1 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN2 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN3 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN4 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN5 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN6 , GPIO_OUTPUT);
	MGPIO_voidSetPinMode(DAC_PORT , GPIO_PIN7 , GPIO_OUTPUT);

  	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN0 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN1 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN2 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN3 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN4 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN5 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN6 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
	MGPIO_voidSetPinOutputMode(DAC_PORT , GPIO_PIN7 , GPIO_PUSH_PULL , GPIO_MID_SPEED);
}



}

/*
@fn			-R2RDAC_voidSetData
@brief 		-setting the data on the ports
@param [in]  takes the pointer to the array that we will wor on 
@param [in]  The array size
@reterval 	-Null
-Note 		-NULL
*/
void R2RDAC_voidSetData (const u8 *Pointer_u8Arr, u32 Copy_u32ArrSize)
{
	u32 Local_u32Counter = 0;
	for (Local_u32Counter = 0; Local_u32Counter < Copy_u32ArrSize; Local_u32Counter++)
	{
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN0, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN0));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN1, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN1));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN2, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN2));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN3, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN3));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN4, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN4));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN5, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN5));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN6, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN6));
		GPIO_voidSetPinValue(DAC_PORT, GPIO_PIN7, GET_BIT(Pointer_u8Arr[Local_u32Counter], GPIO_PIN7));
		STK_voidDelayMS(125);
	}
}
