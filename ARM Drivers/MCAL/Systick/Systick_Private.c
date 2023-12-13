


#ifndef SYSTICK_PRIV_H
#define SYSTICK_PRIV_H


#define SYSTICK_BASE_ADRESS (0xE000E010)
#define SYSTICK_Source      AHB
#define AHB          1
#define AHB_DIVIDBY8 0 

typedef struct 
{
    u32 STK_CTRL;
    u32 STK_LOAD;
    u32 STK_VAL;
    u32 STK_CALIB;
}SysTick_t ;

#define STK    ((volatile SysTick_t*)SYSTICK_BASE_ADRESS)



 
#endif