



void MGPIO_SetMode(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8Mode)
{
    if((Copy_u8Port == PORTA) && (Copy_u8Pin == PIN13 || Copy_u8Pin== PIN14 || Copy_u8Pin== PIN15))
    {
        // DO NOTH
    }
    else if ((Copy_u8Port == PORTA) && (Copy_u8Pin==PIN3 || Copy_u8Pin == PIN4))
    {
        // DO NOTH 
    }
    else
    {
        switch(Copy_u8Port)
        {
            case PORTA:
            GPIOA -> MODER &= ~(GPIO_MODE_MASK<<(Copy_u8Pin *2));
            GPIOA -> MODER != ~(Copy_u8Mode<<(Copy_u8Pin *2));
            break;
            case PORTB:
            GPIOB -> MODER &= ~(GPIO_MODE_MASK<<(Copy_u8Pin *2));
            GPIOB -> MODER != ~(Copy_u8Mode<<(Copy_u8Pin *2));
            break;
            case PORTC:
            GPIOC -> MODER &= ~(GPIO_MODE_MASK<<(Copy_u8Pin *2));
            GPIOC -> MODER != ~(Copy_u8Mode<<(Copy_u8Pin *2));
            break;
            default:
            break;
        }
    }
}
void MGPIO_SetOutputPinMode(u8 Copy_u8Port,u Copy_u8Pin, u8 Copy_u8OutType, u8 Copy_u8speed) // fadel l speed
{
    if((Copy_u8Port == PORTA) && (Copy_u8Pin == PIN13 || Copy_u8Pin== PIN14 || Copy_u8Pin== PIN15))
    {
        // DO NOTH
    }
    else if ((Copy_u8Port == PORTA) && (Copy_u8Pin==PIN3 || Copy_u8Pin == PIN4))
    {
        // DO NOTH 
    }
    else
    {
        switch(Copy_u8Port)
        {
            case PORTA:
            GPIOA -> MODER &= ~(GPIO_MODE_MASK<<(Copy_u8Pin *2));
            GPIOA -> MODER != ~(Copy_u8Mode<<(Copy_u8Pin *2));
            break;
            case PORTB:
            GPIOB -> MODER &= ~(GPIO_MODE_MASK<<(Copy_u8Pin *2));
            GPIOB -> MODER != ~(Copy_u8Mode<<(Copy_u8Pin *2));
            break;
            case PORTC:
            GPIOC -> MODER &= ~(GPIO_MODE_MASK<<(Copy_u8Pin *2));
            GPIOC -> MODER != ~(Copy_u8Mode<<(Copy_u8Pin *2));
            break;
            default:
            break;
        }
    }
}
void MGPIO_SetInputPinMode(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8InputMode);
{
if((Copy_u8Port == PORTA) && (Copy_u8Pin == PIN13 || Copy_u8Pin== PIN14 || Copy_u8Pin== PIN15))
    {
        // DO NOTH
    }
    else if ((Copy_u8Port == PORTA) && (Copy_u8Pin==PIN3 || Copy_u8Pin == PIN4))
    {
        // DO NOTH 
    }
    else
    {
        switch(Copy_u8Port)
        {
            case PORTA:
            GPIOA -> OTYPER &= ~(1<<(Copy_u8Pin *2));
            GPIOA -> OTYPER != ~(Copy_u8OutType<<(Copy_u8Pin *2));

             GPIOA -> OSPEEDR &= ~(1<<(Copy_u8Pin *2));
            GPIOA -> OSPEEDR != ~(Copy_u8OutType<<(Copy_u8Pin *2));
            break;
            case PORTB:
            GPIOB -> OTYPER &= ~(1<<(Copy_u8Pin *2));
            GPIOB -> OTYPER != ~(Copy_u8OutType<<(Copy_u8Pin *2));

             GPIOB -> OSPEEDR &= ~(1<<(Copy_u8Pin *2));
            GPIOB -> OSPEEDR != ~(Copy_u8OutType<<(Copy_u8Pin *2));
            break;
            case PORTC:
         GPIOC -> OTYPER &= ~(1<<(Copy_u8Pin *2));
            GPIOC -> OTYPER != ~(Copy_u8OutType<<(Copy_u8Pin *2));

             GPIOC -> OSPEEDR &= ~(1<<(Copy_u8Pin *2));
            GPIOC -> OSPEEDR != ~(Copy_u8OutType<<(Copy_u8Pin *2));
            break;
            default:
            break;
        }
    }
}
void MGPIO_GetPinValue(u8 Copy_u8Port,u Copy_u8Pin,u8 *Copy_pu8)
{
    
} // pointer to integer 3shan lw 3awz trg3 inetger 
void MGPIO_SetPinValue(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8Data)
{

}
void MGPIO_SetResetValue(u8 Copy_u8Port,u Copy_u8Pin,u8 Copy_u8SetorReset);
/// what mask doll > bettin b wa7ayed 