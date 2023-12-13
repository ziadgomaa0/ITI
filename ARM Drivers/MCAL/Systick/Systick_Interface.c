/*
auther : ziad gomaa
date : 12 sep 2023

*/



void MSYSTICK_voidInit(void);
void MSYSTICK_voidStart(u32 Copy_32Loadvalue);
void MSYSTICK_voidDelayMs(u32 Copy_32Delayvalue);
void MSYSTICK_voidDelayus(u32 Copy_32Delayvalue);
void MSYSTICK_voidReadFlag(void);
void MSYSTICK_voidCtrlIntState(SYSTICKState Copy_State);
u32 MSTK_32GetElapsedTime(void);
u32 MSTK_32GetRemainingTime(void);