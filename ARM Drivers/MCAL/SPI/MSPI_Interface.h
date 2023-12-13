/*
auther : ziad gomaa
Date : 21 sep 2023


*/


#ifndef MSPI_INTERFACE_H
#define MSPI_INTERFACE_H


#define MSPI_MODE0    1  // CK to 0 when idle ,, 0: The first clock transition is the first data capture edge
#define MSPI_MODE1    2   
#define MSPI_MODE2    3                      
#define MSPI_MODE3    4

#define FCLK_DIVBY_2   0b000
#define FCLK_DIVBY_4   0b001
#define FCLK_DIVBY_8   0b010
#define FCLK_DIVBY_16  0b011
#define FCLK_DIVBY_32  0b100
#define FCLK_DIVBY_64  0b101
#define FCLK_DIVBY_128 0b110
#define FCLK_DIVBY_256 0b111



#define MSPI_MSB_FIRST               0
#define MSPI_LSB_FIRST 				 1

#define SPI_DATAFRAME_8  0
#define SPI_DATAFRAME_16 1  //data frame format

#define HARDWARE_SLAVE_MANAGEMENT   0
#define SOFTWARE_SLAVE_MANAGEMENT   1 //Software slave managament 

#define MSPI_INT_DISABLE             0
#define MSPI_TXE_INT_ENABLE          1
#define MSPI_RXNE_INT_ENABLE         2


#define SPI_MASTER_MODE 1
#define SPI_SLAVE_MODE 0

#define SPI_ENABLED  1
#define SPI_DISABLED 0



 void MSPI_voidInit(void);
 u8 MSPI1_u8SendDataU8(u8 Copy_u8Data) ;
void MSPI_voidSetCallBack(void (*ptr) (void)) ;


/*
#define ZERO_FIRST 1  // CK to 0 when idle ,, 0: The first clock transition is the first data capture edge
#define ONE_FIRST  2 
#define ZERO_SEC   3
#define ONE_SEC*/

#endif 