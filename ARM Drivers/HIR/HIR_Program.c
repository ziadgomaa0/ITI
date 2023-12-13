


void func1(void)
{
    if(flag==0)
    {
        flag=1;
        MYSYSTICK_voidStart(30000);

    }
    else
    {
        arr[counter]=MSTK_u32GetElapsedTime();
        MYSYSTICK_voidStart(30000);
        counter++;
    }
}
void func2(void)
{
    flag=0;
    counter =0;
    for(u8 i=0;i<8;i++)
    {
        if((arr[25-i]>=1000) && (arr[25-i]<=1500))
        {
            CLR_BIT(data,i);
        }
        elseif((arr[25-i]>=2000) && (arr[25-i]<=2500))
        {
            SET_BIT(data,i);
        }
    }
}