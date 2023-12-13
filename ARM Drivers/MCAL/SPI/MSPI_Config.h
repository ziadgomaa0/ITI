
/*
auther : ziad gomaa
Date : 21 sep 2023


*/





#ifndef MSPI_CONFIG_H
#define MSPI_CONFIG_H

// Set DFF bit to define 8-16 bit data frame 
#define MSPI1_DATA_SIZE   SPI_DATAFRAME_16                  //  for using 16 bit data size frame

#define MSPI1_STATUS      SPI_ENABLED
 
#define MSPI1_CLOCK_MODE  MSPI_MODE0

#define MSPI1_PRESCALLER  FCLK_DIVBY_32

#define MSPI1_DATA_ORDER  MSPI_MSB_FIRST

#define MSPI1_INT_STATUS  MSPI_INT_DISABLE 

#define MSPI1_SS_PORT     GPIO_PORTA

#define MSPI1_SS_PIN      GPIO_PIN0  // SPI_CR2 
// Select the BR[2:0] bits to define the serial clock baud rate (see SPI_CR1 register 

#define MASTER_SLAVE      SPI_MASTER_MODE
// there is software and hard soft = 1 .. hardware bit =0   

#define MSPI1_SS_MANAGE   HARDWARE_SLAVE_MANAGEMENT                 //Software NNS Managment

//Slave select can be set SSM i SPI_CR1 
#endif 