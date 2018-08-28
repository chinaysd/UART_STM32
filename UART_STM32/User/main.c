#include "stm32f10x.h"
#include "./led/bsp_led.h"
#include "./uart/bsp_uart.h"


void delay(uint32_t count)
{
	for(; count!=0; count--);
}

int main(void)
{
	DEBUG_UART_Config();
	
	//USART_SendData(DEBUG_USARTx, 'a');
	Usart_SendString(DEBUG_USARTx, "开发板");
	
	// printf->fputc->USART_SendData->电脑的上位机
	printf("欢迎使用野火STM32开发板\r\n");
	

	
	while(1);

}

