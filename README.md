# STM32F411RE
STM32开发库！
#### 开发：<https://developer.mbed.org/>
#### 教程：<http://infiniinnovations.com/>
#### 参考1：<http://www.keil.com/dd2/st/stm32f411retx/>
#### 参考2：<https://www.mbed.com/zh-cn/development/getting-started/>
#### 参考3：<https://docs.mbed.com/docs/getting-started-mbed-os/en/latest/>
## Microcontroller features
* STM32F411RET6 in LQFP64 package
* ARM®32-bit Cortex®-M4 CPU with FPU
* 100 MHz max CPU frequency
* VDD from 1.7 V to 3.6 V
* 512 KB Flash
* 128 KB SRAM
* GPIO (50) with external interrupt capability
* 12-bit ADC with 16 channels
* RTC
* Timers (8)
* I2C (3)
* USART (3)
* SPI (5)
* USB OTG Full Speed
* SDIO 

## Nucleo features
* Two types of extension resources
  * Arduino Uno Revision 3 connectivity
  * STMicroelectronics Morpho extension pin headers for full access to all STM32 I/Os 

* On-board ST-LINK/V2-1 debugger/programmer with SWD connector
  * Selection-mode switch to use the kit as a standalone ST-LINK/V2-1 

* Flexible board power supply
  * USB VBUS or external source (3.3 V, 5 V, 7 - 12 V)
  * Power management access point 

* User LED (LD2)
* Two push buttons: USER and RESET
* USB re-enumeration capability: three different interfaces supported on USB

* Virtual Com port
  * Mass storage (USB Disk drive) for drag'n'drop programming
  * Debug port

## Nucleo pinout
![](https://developer.mbed.org/media/uploads/bcostm/xnucleo64_revc_f411re_mbed_pinout_v2_arduino.png.pagespeed.ic.mYbmFCWzvy.png)
![](https://developer.mbed.org/media/uploads/bcostm/xnucleo64_revc_f411re_mbed_pinout_v2_morpho.png.pagespeed.ic.3yCTTK2zH2.png)

> SERIAL_TX=PA_2  I2C_SCL=PB_8  SPI_MOSI=PA_7  PWM_OUT=PB_3
> SERIAL_RX=PA_3  I2C_SDA=PB_9  SPI_MISO=PA_6
                                SPI_SCK =PA_5
                                SPI_CS  =PB_6