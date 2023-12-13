

#ifndef MUSART_INT_H
#define MUSART_INT_H

void MUSART_voidInit(void);
void MUSART_Transmit(u8 *Copy_u8Data, u8 Copy_u8Length);
u8 MUSART_Recieve(void);
void MUSART_voidEnable(void);
void MUSART_voidDisable(void);
void MUSART_voidCallBack(void(*ptr)(void));




#endif 