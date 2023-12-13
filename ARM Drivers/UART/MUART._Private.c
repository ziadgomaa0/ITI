




#define MUSART1_BASE_ADRESS		(0x40011000)
#define MUSART2_BASE_ADRESS		(0x40004400)
#define MUSART6_BASE_ADRESS		(0x40011400)

typedef struct{

    u32 SBK 
    u32 RWU
    u32 RE
    u32 TE 
    u32 IDLEIE
    u32 RXNEIE
    u32 TCIE
    u32 TXEIF
    u32 PEIE
    u32 PS
    u32 PCE
    u32  WAKE
    u32    M
    u32   UE
    u32    RESEREVED0
    u32    OVER8
    u32 RESERVED1
}MSUART_CR1;


typedef struct 
{
    u32 SR;
    u32 DR;
    u32 BRR;
    MUSAER_CR1 CR1;
    u32 CR2;
    u32 CR3;
}MSUART_t;

#define USART_1   ((volatile MUSART1_BASE_ADRESS))
