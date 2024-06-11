#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIOB_MODE *((int *)0x40020400)
#define GPIOB_ODR *((int *)0x40020414)

void RED_LED_init(void)
{
	//int a;
	*((int *)0x40023830) |=(0x1<<1);
	RCC_AHB1ENR |=(0X1<<1);//GPIO port B clock is enable
	GPIOB_MODE &=0xF3FFFFFF;//set mode to output direction
	GPIOB_MODE |=0x04000000;//load 01 in to 27th & 26th to set mode to output direction
}

void Delay(void)
{
	int i=0;
	for(i=0;i<100000;i++)
	{
		;
	}
}

int main()
{
	RED_LED_init();
	while(1)
	{
		GPIOB_ODR &=~(0x1<<13);//clear 13th bit position to RED LED is ON
		Delay();//100ms delay
		GPIOB_ODR |=(0x1<<13);//set 13th bit position to RED LED is OFF
		Delay();//100ms delay
	}
}
