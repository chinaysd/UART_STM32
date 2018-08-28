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
	Usart_SendString(DEBUG_USARTx, "������");
	
	// printf->fputc->USART_SendData->���Ե���λ��
	printf("��ӭʹ��Ұ��STM32������\r\n");
	

	
	while(1);

}

