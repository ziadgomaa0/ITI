/*
AUTHER : Ziad Gomaa 
Date : 9 sep 2023
*/


// memory mapping 
 
#define GPIOC_BASE_ASDRESS 0x40080000
#define GPIOB_BASE_ASDRESS 0x40020400
#define GPIOA_BASE_ASDRESS 0x40020000

 typedef struct 
{
    MODER ;
    OTYPER ;
    OSPEEDR ;
    OSPEEDER ; // so2al 
    PUPDR ;
    IDR;
    ODR;
    BSRR;
    LCKR;
    AFRL;
    AFRH;
}