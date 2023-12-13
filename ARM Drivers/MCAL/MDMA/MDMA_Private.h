

#ifndef MDMA_PRIVATE_H
#define MDMA_PRIVATE_H


#define DMA2 0x40026400
#define DMA1 0x40026000

#define ENABLE_BIT 1

typedef struct
{
    u32 DMA_CR;
    u32 DMA_NDTR;
    u32 DMA_PAR;
    u32 DMA_M0AR;
    u32 DMA_M1AR;
    u32 DMA_FCR;

}DMA_stream_t;




typedef struct
{
   u32 DMA_LISR;
   u32 DMA_HISR;
   u32 DMA_LIFCR;
   u32 DMA_HIFCR;
  DMA_stream_t s[8];
}DMA_REG_t;
 

#endif