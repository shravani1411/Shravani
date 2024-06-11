/*Airplane wing Lights blinking Delays:
USER LED1 (GREEN): ON (50msec), OFF (50msec), ON (50msec), OFF (150msec) periodically.
USER LED2 (RED): ON (50msec), OFF (250msec), ON (50msec), OFF (500msec) periodically.*/

#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIOB_MODE *((int *)0x40020400)
#define GPIOB_ODR *((int *)0x40020414)

void GREEN_LED_init(void)
{
	//int a;
	//*((int *)0x40023830) |=(0x1<<1);
	RCC_AHB1ENR |=(0X1<<1);//GPIO port B clock is enable
	GPIOB_MODE &=0xC3FFFFFF;//set mode to output direction
	GPIOB_MODE |=0x14000000;//load 01 in to 28th & 29th to set mode to output direction
}


void Delay(int a)
{
	int i=0;
	for(i=0;i<72000*a;i++)
	{
		;
	}
}


int main()
{
	GREEN_LED_init();
	while(1)
	{
		GPIOB_ODR &=~(0x1<<14);//clear 14th bit position to GREEN LED1 is ON
		Delay(1);//50ms delay
		GPIOB_ODR |=(0x1<<14);//set 14th bit position to GREEN LED1 is OFF
		Delay(1);//50ms delay
		GPIOB_ODR &=~(0x1<<14);//clear 14th bit position to GREEN LED1 is ON
		Delay(1);//50ms delay
		GPIOB_ODR |=(0x1<<14);//set 14th bit position to GREEN LED1 is OFF
		Delay(3);//150ms delay
		
		GPIOB_ODR &=~(0x1<<13);//clear 13th bit position to RED LED2 is ON
		Delay(1);//50ms delay
		GPIOB_ODR |=(0x1<<13);//set 13th bit position to RED LED2 is OFF
		Delay(5);//250ms delay
		GPIOB_ODR &=~(0x1<<13);//clear 13th bit position to RED LED2 is ON
		Delay(1);//50ms delay
		GPIOB_ODR |=(0x1<<13);//set 13th bit position to RED LED2 is OFF
		Delay(10);//500ms delay
	}
}
