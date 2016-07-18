/*七段数码管计数器
 *Nucleo STM32F411RET6
 *pengshp
 *https://pengshp.github.io/
*/
#include "mbed.h"
/*总线输出*/
BusOut Seg1(PA_8,PB_10,PB_4,PB_5,PB_3,PA_10,PA_2,PA_3);//A,B,C,D,E,F,G,DP
char SegConvert(char SegValue);
char A=0;
char B;
int main()
{
    while(1)
    {
        B=SegConvert(A);
        Seg1=~B;//此处使用共阳极数码管，输出0时亮
        A++;
        if(A > 0x09)
        {
            A = 0;
        }
        wait(0.5);
    }
}
char SegConvert(char SegValue)
{
    char SegByte=0x00;
    switch(SegValue)                 //DP,G,F,E,D,C,B,A
    {
        case 0: SegByte = 0x3F;break;//0 0 1 1 1 1 1 1
        case 1: SegByte = 0x06;break;
        case 2: SegByte = 0x5B;break;
        case 3: SegByte = 0x4F;break;
        case 4: SegByte = 0x66;break;
        case 5: SegByte = 0x6D;break;
        case 6: SegByte = 0x7D;break;
        case 7: SegByte = 0x07;break;
        case 8: SegByte = 0x7F;break;
        case 9: SegByte = 0x6F;break;
    }
    return SegByte;
}
