#include "includes.h"

int main(void)
{
  unsigned char led_num;
  led_num=4;
  
  BSP_Init();
  
  while(1)
  {
    
    led_num=led_num*2;
    if(led_num>4)
    {
      led_num=1;
    }
    LED_V6=((led_num&0x04)==0)?1:0;
    LED_V7=((led_num&0x02)==0)?1:0;
    LED_V8=((led_num&0x01)==0)?1:0;
    delay_ms(1000);
  }
}
