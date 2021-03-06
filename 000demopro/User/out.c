#include "out.h"

void Out_Init(void)
{
  
  GPIO_InitTypeDef GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOB, ENABLE );
  
  GPIO_InitStructure.GPIO_Pin = ( GPIO_Pin_5);
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP ;   //推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOB, &GPIO_InitStructure);
  GPIO_ResetBits(GPIOB, GPIO_Pin_5 ); 	//PB4567891011输出低
  
  GPIO_InitStructure.GPIO_Pin = ( GPIO_Pin_6 | GPIO_Pin_3);
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP ;   //推挽输出
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  GPIO_Init(GPIOD, &GPIO_InitStructure);
  GPIO_ResetBits(GPIOD, GPIO_Pin_3 | GPIO_Pin_6);
  
}
