/*
auther : ziad gomaa
date : 12 sep 2023

*/



#ifndef SYSTICK_PROGRAM_C
#define SYSTICK_PROGRAM_C

void MSYSTICK_voidInit(void)
{
    #if (SYSTICK_Source == AHB)
    SET_BIT(SysTick_t ->STK_CTRL,CLOCK_BIT);
    #elif (SYSTICK_Source == AHB_DIVIDBY8)
     CLR_BIT(SysTick_t ->STK_CTRL,CLOCK_BIT);
}
void MSYSTICK_voidStart(u32 Copy_32Loadvalue)
{
    SysTick_t>STK_LOAD = Copy_32Loadvalue ;
    SysTick_t>STK_VAL = 0;
SET_BIT(SysTick_t ->STK_CTRL,ENABLE_BIT);
}

void MSYSTICK_voidReadFlag(void)
{
    u8 local_ReadFlag = GET_BIT(SysTick_t -> STK_CTRL);
    return local_ReadFlag;
}
void MSYSTICK_voidDelayus(u32 Copy_32Delayvalue)
{
    STK_LOAD = Copy_32Delayvalue  *(16E6 / E6);
    VAL=0;
    while(!GET_BIT(CTRL,CTRL_COUNT))
    
}



#endif
