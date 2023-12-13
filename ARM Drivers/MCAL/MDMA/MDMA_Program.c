




void DMA2_Init(void)
{
    DMA2 -> s[0].CR 
    SET_BIT(DMA2 -> s[0].CR ,ENABLE_BIT);

}


void DMA2_SetStreamConfiguration (u8 Copy_u8SteamID,u8 Copy_u8ChannelID,u32 *Copy_pu32SourceAdress,
                                  u32 *Copy pu32DestinationAdress
                                  u8 Copy_u8ElementSize ,
                                  u16 Copy_u16BlockSize)
{
    
}