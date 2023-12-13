/*
auther : ziad gomaa
Date : 21 sep 2023


*/


#include "STD_Types.h"
#include "BIT_MATH.h"

#include "../include/MSPI_Private.h"
#include "../include/MSPI_Config.h"
#include "../include/MSPI_Interface.h"
#include "../include/MGPIO_Interface.h"



void (*MSPI1_CallBack) (void);



void MSPI1_voidInit ( void ){

#if   MSP1_STATUS == MSPI_ENABLE
	SET_BIT( MSPI1 -> SPI_CR1 , 6 );

#if		MSPI1_CLOCK_MODE == MSPI_MODE0

	CLR_BIT( MSPI1 -> SPI_CR1 , 0 ); CLR_BIT( MSPI1 -> SPI_CR1 , 1 );

#elif	MSPI1_CLOCK_MODE == MSPI_MODE1

	SET_BIT( MSPI1 -> SPI_CR1 , 0 ); CLR_BIT( MSPI1 -> SPI_CR1 , 1 );

#elif	MSPI1_CLOCK_MODE == MSPI_MODE2

	CLR_BIT( MSPI1 -> SPI_CR1 , 0 ); SET_BIT( MSPI1 -> SPI_CR1 , 1 );

#elif	MSPI1_CLOCK_MODE == MSPI_MODE3

	SET_BIT( MSPI1 -> SPI_CR1 , 0 ); SET_BIT( MSPI1 -> SPI_CR1 , 1 );

#endif

#if    MSPI1_MASTER_SLAVE == MSPI_MASTER

	SET_BIT( MSPI1 -> SPI_CR1 , 2 );

	MSPI1 -> SPI_CR1 &= 0xFFC7 ;
		MSPI1 -> SPI_CR1 |= ( MSPI1_PRESCALLER << 3 ) ;

		SET_BIT( MSPI1 -> SPI_CR1 , 6 );


#elif  MSPI1_MASTER_SLAVE == MSPI_SLAVE

	CLR_BIT( MSPI1 -> SPI_CR1 , 2 );

#endif

#if   MSPI1_DATA_ORDER == MSPI_MSB_FIRST

	CLR_BIT( MSPI1 -> SPI_CR1 , 7 );

#elif MSPI1_DATA_ORDER == MSPI_LSB_FIRST

	SET_BIT( MSPI1 -> SPI_CR1 , 7 );

#endif

#if   MSPI1_SS_MANAGE  == HARDWARE_SLAVE_MANAGEMENT

	CLR_BIT( MSPI1 -> SPI_CR1 , 9 );

#elif MSPI1_SS_MANAGEb == SOFTWARE_SLAVE_MANAGEMENT

	SET_BIT( MSPI1 -> SPI_CR1 , 9 );

#endif

#if   MSPI1_DATA_SIZE == SPI_DATAFRAME_8

	CLR_BIT( MSPI1 -> SPI_CR1 , 11 );

#elif MSPI1_DATA_SIZE ==SPI_DATAFRAME_16

	SET_BIT( MSPI1 -> SPI_CR1 , 11 );

#endif

#if   MSPI1_INT_STATUS == MSPI_INT_DISABLE

	/* Active Intterput OF  TXEIE & RXNEIE CR2*/
	//MSPI1 -> CR2 = 0 ;

	MSPI1 -> CR2 = 0x00000030;

#elif MSPI1_INT_STATUS == MSPI_TXE_INT_ENABLE

	SET_BIT( MSPI1 -> CR2 , 7 );

#elif MSPI1_INT_STATUS == MSPI_RXNE_INT_ENABLE

	SET_BIT( MSPI1 -> CR2 , 6 );

#endif


#elif MSP1_STATUS == MSPI_DISABLE
	CLR_BIT( MSPI1 -> SPI_CR1 , 6 );
#endif


	//	SET_BIT( MSPI1 -> SPI_SPI_CR1 , 9 );
	//	SET_BIT( MSPI1 -> SPI_SPI_CR1 , 0 );
	//	SET_BIT( MSPI1 -> SPI_SPI_CR1 , 1 );
	//	CLR_BIT( MSPI1 -> SPI_SPI_CR1 , 8 );
	//	CLR_BIT( MSPI1 -> SPI_SPI_CR1 , 2 );
	//	//SET_BIT( MSPI1 -> CR2 , 7 ); //TX int
	//	SET_BIT( MSPI1 -> CR2 , 6 ); //Rx int
	//	SET_BIT( MSPI1 -> SPI_SPI_CR1 , 6 );
	//
	/* CPOL =1 / CPHA = 1 / Prescaller = Clk/2 / SPI Enable / MSB First */





//	MSPI1 ->SPI_CR1 = 0x0347 ;
}

u16 MSPI1_voidSendDataU8 ( u16 Copy_u16Data ){

	/* Clear For Slave Select Pin */

	//MGPIO_voidWriteData(_GPIOA_PORT, _PIN_0, _LOW) ;
	MGPIO_SetPinValue(MSPI_SS_PORT , MSPI_SS_PIN ,STD_LOW);


	/* Send Data */
	MSPI1 -> SPI_DR = Copy_u16Data;

	/* Wait Busy Flag to finish */
	while (GET_BIT(MSPI1 -> SPI_SR, 7) == 1);

	/* Set Salve Select Pin */
	MGPIO_SetPinValue(MSPI_SS_PORT , MSPI_SS_PIN ,STD_HIGH);
	//MGPIO_voidWriteData(_GPIOA_PORT, _PIN_0, HIGH) ;

#if(MSPI1_DATA_SIZE == SPI_DATAFRAME_8)
	/* Return to the received data */
	return (u8) MSPI1 -> SPI_DR ;
#elif(MSPI1_DATA_SIZE ==SPI_DATAFRAME_16)
	return MSPI1 -> SPI_DR ;

#endif

}

void MSPI1_voidSetCallBack( void (*ptr) (void) ){

	MSPI1_CallBack = ptr;

}

void SPI1_IRQHandler(void){

	MSPI1_CallBack();

}


