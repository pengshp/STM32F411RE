#include "mbed.h"
Serial pc(USBTX,USBRX);
/*
AnalogIn light(PA_0);//ADC模拟输入
AnalogOut led(LED1);//DAC模拟输出
float lvf=0;
ushort lvu=0;
void main()
{
    while (1)
    {
        lvf=(float)light;
        luf=light.read_u16();
        pc.printf("light adc count is %f,%d\n",lvf,luf);
        wait(0.5);
        if (lvf<0.7)
        {
            led=1;
        }
        else
        {
            led=0;
        }   
    }
}
*/
//ADC and DAC
AnalogOut ao(D4);
AnalogIn ai(PA_0);
float aoValue=0;
float aiValue=0;
int main()
{
    while(1)
    {
        while(1)
        {
            aoValue=aoValue+0.01;
            ao.write(aoValue);
            aiValue=ai.read();
            wait(0.5);
            pc.printf("Aout is %f ,A in is %f,adc value is %f \n",aoValue, aiValue, aiValue*3.3);

        }
    }
}