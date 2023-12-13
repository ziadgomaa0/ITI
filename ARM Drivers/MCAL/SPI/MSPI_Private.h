

#ifndef MSPI_PRIVATE_H
#define MSPI_PRIVATE_H


#define MSPI1_BASE_ADDRESS 0x40013000 
typedef struct 
{
    u32 SPI_CR1;
    u32 RESERVED0;
    u32 SPI_SR;
    u32 SPI_DR;
    u32 SPI_CRCPR ;
    u32 SPI_RXCRCR;
    u32 SPI_TXCRCR;
    u32 SPI_I2SCFGR;
    SPI_I2SPR ;
}SPI_t;

#define SPI ((volatile SPI_t*)SPI_BASE_ADDRESS)

#endif