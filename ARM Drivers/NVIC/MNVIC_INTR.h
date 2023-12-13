/*
author : ziad gomaa
date 11 aug 2023

*/

void MNVIC_VoidEnableInterrupt(u8 Copy_u8Pos);
void MNVIC_VoidDisableInterrupt(u8 Copy_u8Pos);
void MNVIC_VoidEnableInterrupPending(u8 Copy_u8IntPos);
void MNVIC_VoidDisableInterruptPending(u8 Copy_u8IntPos);
void MNVIC_VoidIsInterruptActive(u8 Copy_u8IntPos, u8 * Copy_Read);
void MNVIC_VoidSetInterruptGroupMode(MNVIC_Group_t Copy-eddtGroupMode);
void MNVIC_VoidSetInterruptPriority(u8 Copy_u8Pos,u8 Copy_u8GroupNum, u8 Copy_u8SubGroupNum);

 typedef enum 
 {
 Group16Sub0 = 3,
 Group8Sub2 ,
 Group4Sub4,
 Group2Sub8 ,
 Group0Sub16 
 }
 