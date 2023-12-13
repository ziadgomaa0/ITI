/*
AUTHOR : Ziad Gomaa 
Date : 11 SEP 2023

*/

// reserved - array - 60 -- u8 

#ifndef MNVIC_PRIV_H
#define MNVIC_PRIV_H 


#define NVIC_BASE_ADDRESS (0xE000E100)

typedef struct 
{
    volatile u32 ISER[8];
    volatile u32 reserved1[24];
    volatile u32 ICER[8];
    volatile u32 reserved2[24] ;
    volatile u32 ISPR[8];
    volatile u32 reserved3[24];
    volatile u32 ICPR[8];
    volatile u32 reserved4[24];
    volatile u32 IABR[8];
    volatile u32 reserved5[56];
    volatile u8 IPR[240];
    volatile u32 reserved6[580];
    volatile u32 STIR;

}NVIC_t;

#define NVIC_VECTKEY 0x05FA0000 
#define SCB_AIRCR ((volatile NVIC_t*) 0xE000ED0C)
#define NVIC ((volatile NVIC_t*) NVIC_BASE_ADDRESS)







#endif