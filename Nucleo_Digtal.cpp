#include "mbed.h"

Serial pc(USBTX,USBRX);
DigitalIn butt(PC_13);
DigitalOut led(LED1);

int main()
{
    pc.printf("Digtal in and out test!\n");
    while (1)
    {
        if (butt==0)//button is pressed
        {
            wait_ms(10);
            if(butt==0)
            {
                pc.printf("button is pressed\n");
                led=!led;
                //tag=led.read();
                pc.printf("Toggle the LED the state! %d\n");
                wait(0.2);
            }   
        }   
    }
    return 0;
}