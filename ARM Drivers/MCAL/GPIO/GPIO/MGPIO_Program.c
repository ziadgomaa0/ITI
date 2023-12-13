
#include "../include/BIT_MATH.h"
#include "../include/STD_Types.h"
#include "../include/GPIO/MGPIO_Interface.h"
#include "../include/GPIO/MGPIO_private.h"
#include "../include/GPIO/MGPIO_Configurations.h"


void MGPIO_voidSetPinMode (u8 A_u8Port , u8 A_u8Pin , u8 A_u8Mode)
{
	if ((A_u8Port == GPIO_PORTA) && ((A_u8Pin == GPIO_PIN13) || (A_u8Pin == GPIO_PIN14) || (A_u8Pin == GPIO_PIN15)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else if ((A_u8Port == GPIO_PORTB) && ((A_u8Pin == GPIO_PIN3) || (A_u8Pin == GPIO_PIN4)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else
	{
		/*Switch on the Entered port*/
		switch (A_u8Port)
		{
		case GPIO_PORTA:
			/*Set pin mode*/
			GPIOA->MODER &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOA->MODER |= (A_u8Mode<<(A_u8Pin*2));
			break;
		case GPIO_PORTB:
			/*Set pin mode*/
			GPIOB->MODER &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOB->MODER |= (A_u8Mode<<(A_u8Pin*2));
			break;
		case GPIO_PORTC:
			/*Set pin mode*/
			GPIOC->MODER &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOC->MODER |= (A_u8Mode<<(A_u8Pin*2));
			break;
		default :
			break;
		}
	}
}
void MGPIO_voidSetPinOutputMode (u8 A_u8Port , u8 A_u8Pin , u8 A_u8OutputMode , u8 A_u8Speed)
{
	if ((A_u8Port == GPIO_PORTA) && ((A_u8Pin == GPIO_PIN13) || (A_u8Pin == GPIO_PIN14) || (A_u8Pin == GPIO_PIN15)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else if ((A_u8Port == GPIO_PORTB) && ((A_u8Pin == GPIO_PIN3) || (A_u8Pin == GPIO_PIN4)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else
	{
		/*Switch on the Entered port*/
		switch (A_u8Port)
		{
		case GPIO_PORTA:
			GPIOA->OSPEEDR &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOA->OSPEEDR |= (A_u8Speed<<(A_u8Pin*2));
			/*Set pin output Speed*/
			GPIOA->OTYPER &= ~(ONE_BIT_MASK<<A_u8Pin);
			GPIOA->OTYPER |= (A_u8OutputMode<<A_u8Pin);
			break;
		case GPIO_PORTB:
			/*Set pin output Speed*/
			GPIOB->OSPEEDR &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOB->OSPEEDR |= (A_u8Speed<<(A_u8Pin*2));
			/*Set pin output mode*/
			GPIOB->OTYPER &= ~(ONE_BIT_MASK<<A_u8Pin);
			GPIOB->OTYPER |= (A_u8OutputMode<<A_u8Pin);
			break;
		case GPIO_PORTC:
			/*Set pin output Speed*/
			GPIOC->OSPEEDR &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOC->OSPEEDR |= (A_u8Speed<<(A_u8Pin*2));
			/*Set pin output mode*/
			GPIOC->OTYPER &= ~(ONE_BIT_MASK<<A_u8Pin);
			GPIOC->OTYPER |= (A_u8OutputMode<<A_u8Pin);
			break;
		default :
			break;
		}
	}
}
void MGPIO_voidSetPinInputMode (u8 A_u8Port , u8 A_u8Pin , u8 A_u8InputMode)
{
	if ((A_u8Port == GPIO_PORTA) && ((A_u8Pin == GPIO_PIN13) || (A_u8Pin == GPIO_PIN14) || (A_u8Pin == GPIO_PIN15)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else if ((A_u8Port == GPIO_PORTB) && ((A_u8Pin == GPIO_PIN3) || (A_u8Pin == GPIO_PIN4)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else
	{
		/*Switch on the Entered port*/
		switch (A_u8Port)
		{
		case GPIO_PORTA:
			/*Set pin output mode*/
			GPIOA->PUPDR &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOA->PUPDR |= (A_u8InputMode<<(A_u8Pin*2));
			break;
		case GPIO_PORTB:
			/*Set pin output mode*/
			GPIOB->PUPDR &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOB->PUPDR |= (A_u8InputMode<<(A_u8Pin*2));
			break;
		case GPIO_PORTC:
			/*Set pin output mode*/
			GPIOC->PUPDR &= ~(TWO_BIT_MASK<<(A_u8Pin*2));
			GPIOC->PUPDR |= (A_u8InputMode<<(A_u8Pin*2));
			break;
		default :
			break;
		}
	}
}
void MGPIO_voidSetPinValue (u8 A_u8Port , u8 A_u8Pin , u8 A_u8Output)
{
	if ((A_u8Port == GPIO_PORTA) && ((A_u8Pin == GPIO_PIN13) || (A_u8Pin == GPIO_PIN14) || (A_u8Pin == GPIO_PIN15)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else if ((A_u8Port == GPIO_PORTB) && ((A_u8Pin == GPIO_PIN3) || (A_u8Pin == GPIO_PIN4)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else
	{
		/*Switch on the Entered port*/
		switch (A_u8Port)
		{
		case GPIO_PORTA:
			switch (A_u8Output)
			{
			/*Set pin output value*/
			case GPIO_PIN_HIGH:
				SET_BIT(GPIOA->ODR , A_u8Pin);
				break;
			case GPIO_PIN_LOW:
				CLR_BIT(GPIOA->ODR , A_u8Pin);
				break;
			}
			break;
		case GPIO_PORTB:
			/*Set pin output value*/
			switch (A_u8Output)
			{
			case GPIO_PIN_HIGH:
				SET_BIT(GPIOB->ODR , A_u8Pin);
				break;
			case GPIO_PIN_LOW:
				CLR_BIT(GPIOB->ODR , A_u8Pin);
				break;
			}
			break;
		case GPIO_PORTC:
			/*Set pin output value*/
			switch (A_u8Output)
			{
			case GPIO_PIN_HIGH:
				SET_BIT(GPIOC->ODR , A_u8Pin);
				break;
			case GPIO_PIN_LOW:
				CLR_BIT(GPIOC->ODR , A_u8Pin);
				break;
			}
				break;
		default :
			break;
		}
	}
}
void MGPIO_voidGetPinValue (u8 A_u8Port , u8 A_u8Pin , u8 * pu8Return)
{
	if (pu8Return != NULL)
	{
		if ((A_u8Port == GPIO_PORTA) && ((A_u8Pin == GPIO_PIN13) || (A_u8Pin == GPIO_PIN14) || (A_u8Pin == GPIO_PIN15)))
		{
			/*Do Nothing (Reserved Pins For Debugger)*/
		}
		else if ((A_u8Port == GPIO_PORTB) && ((A_u8Pin == GPIO_PIN3) || (A_u8Pin == GPIO_PIN4)))
		{
			/*Do Nothing (Reserved Pins For Debugger)*/
		}
		else
		{
			/*Switch on the Entered port*/
			switch (A_u8Port)
			{
			case GPIO_PORTA:
				/*read pin value*/
				*pu8Return = GET_BIT(GPIOA->IDR , A_u8Pin);
				break;
			case GPIO_PORTB:
				/*read pin value*/
				*pu8Return = GET_BIT(GPIOB->IDR , A_u8Pin);
				break;
			case GPIO_PORTC:
				/*read pin value*/
				*pu8Return = GET_BIT(GPIOC->IDR , A_u8Pin);
				break;
			default :
				break;
			}
		}
	}

}
void MGPIO_voidSetResetPin (u8 A_u8Port , u8 A_u8Pin , u8 A_u8SetResetValue)
{
	if ((A_u8Port == GPIO_PORTA) && ((A_u8Pin == GPIO_PIN13) || (A_u8Pin == GPIO_PIN14) || (A_u8Pin == GPIO_PIN15)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else if ((A_u8Port == GPIO_PORTB) && ((A_u8Pin == GPIO_PIN3) || (A_u8Pin == GPIO_PIN4)))
	{
		/*Do Nothing (Reserved Pins For Debugger)*/
	}
	else
	{
		/*Switch on the Entered port*/
		switch (A_u8Port)
		{
		case GPIO_PORTA:
			/*Set pin output value*/
			switch (A_u8SetResetValue)
			{
			case GPIO_SET:
				GPIOA->BSRR = 1<<A_u8Pin;
				break;
			case GPIO_RESET:
				GPIOA->BSRR = 1<<(A_u8Pin+GPIO_RESET_INDEX);
				break;
			}
			break;
		case GPIO_PORTB:
			/*Set pin output value*/
			switch (A_u8SetResetValue)
			{
			case GPIO_SET:
				GPIOB->BSRR = 1<<A_u8Pin;
				break;
			case GPIO_RESET:
				GPIOB->BSRR = 1<<(A_u8Pin+GPIO_RESET_INDEX);
				break;
			}
			break;
		case GPIO_PORTC:
			/*Set pin output value*/
			switch (A_u8SetResetValue)
			{
			case GPIO_SET:
				GPIOC->BSRR = 1<<A_u8Pin;
				break;
			case GPIO_RESET:
				GPIOC->BSRR = 1<<(A_u8Pin+GPIO_RESET_INDEX);
				break;
			}
				break;
		default :
			break;
		}
	}
}

void MGPIO_voidSetPortValue (u8 A_u8Port , u16 A_u16Data)
{
	/*Switch on the Entered port*/
	switch (A_u8Port)
	{
	case GPIO_PORTA :
		/*Set port value*/
		GPIOA->ODR = A_u16Data;
		break;
	case GPIO_PORTB :
		/*Set port value*/
		GPIOB->ODR = A_u16Data;
		break;
	case GPIO_PORTC :
		/*Set port value*/
		GPIOC->ODR = A_u16Data;
		break;
	default :
		break;
	}
}
