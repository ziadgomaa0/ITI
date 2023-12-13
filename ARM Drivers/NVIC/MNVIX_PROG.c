/*
author :ziad gomaa
date : 11 sept 2023 
*/




void MNVIC_VoidEnableInterrupt(u8 Copy_u8Pos)
{

NVIC -> ISER [Copy_u8Pos/32]|=1<<(Copy_u8Pos%32);
}


void MNVIC_VoidDisableInterrupt(u8 Copy_u8Pos)
{
NVIC -> ICER [Copy_u8Pos/32]|=1<<(Copy_u8Pos%32);
}


void MNVIC_VoidEnableInterrupPending(u8 Copy_u8IntPos)
{
 NVIC -> ISPR [Copy_u8Pos/32]|=1<<(Copy_u8Pos%32);
}


void MNVIC_VoidDisableInterruptPending(u8 Copy_u8IntPos)
{
    NVIC -> ICPR [Copy_u8Pos/32]|=1<<(Copy_u8Pos%32);
}


void MNVIC_VoidIsInterruptActive(u8 Copy_u8IntPos, u8 * Copy_Read)
{

*Copy_Read = GET_BIT(NVIC -> IABR [Copy_u8Pos/32],1<<(Copy_u8Pos%32));
}


void MNVIC_VoidSetInterruptGroupMode(MNVIC_t Copy_eddtGroupMode)
{
Global_u8IPR=Copy_uddtGroupMode;
u32_Copy_u32Local = NVIC_VECTKEY | (Copy_uddtGroupMode<<8) ;
SCB_AIRCR = u32_Copy_u32Local ;
}
void MNVIC_VoidSetInterruptPriority(u8 Copy_u8Pos,u8 Copy_u8GroupNum, u8 Copy_u8SubGroupNum)
{
    switch(Global_u8IPR)
    case Group16Sub0 :
    break;
    case Group8Sub2 :
    break ;
    case Group4Sub4:
    break;
    case Group2Sub8:
    break;
    case Group2Sub16 :
    break; 
}