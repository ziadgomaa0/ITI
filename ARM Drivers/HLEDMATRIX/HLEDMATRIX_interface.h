/*****************************************************************/
/* Author  : Setfr                                               */
/* Layer   : HAL                                                 */
/* SWC     : HLEDMATRIX                                          */
/* Version : 1.0                                                 */
/* Date    : 24 Sep 2023                                         */
/*****************************************************************/
#ifndef HLEDMATRIX_INTERFACE_H_
#define HLEDMATRIX_INTERFACE_H_

void HLEDMATRIX_voidInit(void);
void HLEDMATRIX_voidDisableColumns(void);
void HLEDMATRIX_voidSetRowValue(u8 Copy_u8RowValue);
void HLEDMATRIX_voidDisplay(u8 *Copy_u8arr);

#endif