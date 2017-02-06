#include "mbed.h"

Serial pc(USBTX,USBRX);
DigtalOut red(LED_RED);
DigtalOut green(LED_GREEN);
DigtalOut blue(LED_BLUE);

int main(){
    red=1;
    green=1;
    blue=1;
    pc.printf("hello world!\n");
    while(1){
        if(pc.readable()){
            char command=pc.getc();
            switch (command){
                case 'R':
                    red=0;
                    break;
                case 'G':
                    green=0;
                    break;
                case 'B':
                    blue=0;
                    break;
            }
        }
    }
    return 0;
}