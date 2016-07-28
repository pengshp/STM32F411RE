/*
	定时器计数器Timer
	start 启动定时器
	stop  停止定时器
	reset 复位定时器为0
	read  以秒为单位读取时间
	read_ms 以ms为单位读取时间
	read_us
*/

#include "mbed.h"

Timer  t;   //创建定时器对象
DigitalOut led(LED1);
Serial pc(USBTX,USBRX);

int main()
{
	int begin,end;
	t.start();           //开始计时
	begin = t.read_us(); //读取时间
	led = !led;
	end = t.read_us();
	t.stop();            //停止计时
	pc.printf("Toggle the led takes %d us\r\n",end-begin);
	return 0;
}