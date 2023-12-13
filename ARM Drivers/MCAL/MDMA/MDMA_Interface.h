


#ifndef MDMA_PRIVATE_H



void DMA2_Init(void);

void DMA2_SetStreamConfiguration (u8 Copy_u8SteamID,u8 Copy_u8ChannelID,u32 *Copy_pu32SourceAdress,
                                  u32 *Copy pu32DestinationAdress
                                  u8 Copy_u8ElementSize ,
                                  u16 Copy_u16BlockSize);

void DMA2_SetCallBack(u8 Copy)
void DMA2_