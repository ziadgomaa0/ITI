


#ifndef EXTINT1_PRIVATE_H
#define EXTINT1_PRIVATE_H 

#define EXTINT1_BASE_ADDRESS (0x40013C00)
#define SYSCFG  (0x40013800)

typedef struct
{
    u32 EXTI_IMR;
    u32 EXTI_EMR;
    u32 EXTI_RTSR;
    u32 EXTI_FTSR;
    u32 EXTI_SWIER;
    u32 EXTI_PR;
}EXTINT1_t;

typedef struct 
{
    u32 SYSCFG_MEMRMP;
    u32 SYSCFG_PMC;
    u32 SYSCFG_EXTICR1;
    u32 SYSCFG_EXTICR2;
    u32 SYSCFG_EXTICR3;
    u32 SYSCFG_EXTICR4;
    u16 RESERVED1;
    u32 SYSCFG_CMPCR;

}








#endif