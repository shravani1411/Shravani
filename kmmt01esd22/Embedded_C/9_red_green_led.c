//Write an Embedded C Program Whenever SW_UP press RED LED is ON, whenever SW_DN press GREEN LED is ON using Falling edge GPIO interrupt.

//RCC registers
#define		RCC_AHB1ENR					(*(volatile int *)0x40023830)						//system clock
#define		RCC_APB2ENR					(*(volatile int *)0x40023844)						//peripheral clock enable 

//GPIOB registers
#define		GPIO_PORTB_MODE			(*(volatile int *)0x40020400)						//GPIOB MODE register
#define		GPIO_PORTB_ODR			(*(volatile int *)0x40020414)						//GPIOB output data register

//GPIOC registers
#define		GPIO_PORTC_MODE			(*(volatile int *)0x40020800)						//GPIOC MODE register
#define		GPIO_PORTC_PUPDR		(*(volatile int *)0x4002080C)						//GPIOC pull-up/pull-down register
#define		GPIO_PORTC_IDR			(*(volatile int *)0x40020810)						//GPIOC input data register

//SYSCFG registers
#define		SYSCFG_EXTICR3			(*(volatile int *)0x40013810)						//SYSCFG external interrupt configuration register 3

//EXTI registers
#define		EXTI_IMR						(*(volatile int *)0x40013C00)						//EXTI Interrupt mask register
#define		EXTI_FTSR						(*(volatile int *)0x40013C0c)						//EXTI Falling trigger selection register
#define		EXTI_PR							(*(volatile int *)0x40013C14)						//EXTI Pending register

//NVIC registers
#define		NVIC_ISER0					(*(volatile int *)0xE000E100)						//Interrupt Range is 31 to 0

//Function prototype
void LED_INIT(void);														//Initialize and configure RED & GREEN LED
void SWITCH_INIT(void);													//Initialize and configure SW_UP & SW_DN
void SWITCH_INTERRUPT_EN(void);									//Enable an interrupt on the Falling edge of ENTER Switch
void EXTI9_5_IRQHandler(void);
void Delay(int n);															//Delay function

void Delay(int n)
{
	volatile int i;
	for(i=0; i < 1600*n; i++);
}

void LED_INIT(void)
{
	RCC_AHB1ENR |= (0x1<<1);											//Enable clock to Port B
	while(!(RCC_AHB1ENR & 0x02));									//Wait till the bit is set
	GPIO_PORTB_MODE &= 0xc3FFFFFF;	
	GPIO_PORTB_MODE |= 0x14000000;								//Enable OutPut Mode for PB13 & PB14
	GPIO_PORTB_ODR |= 0x1 << 13;									//Turn off the Red Led
	GPIO_PORTB_ODR |= 0x1 << 14;									//Turn Off the Green led
}

void SWITCH_INIT(void)
{
	RCC_AHB1ENR |= 0x1<<2;												//Enable clock for Port C
	while((RCC_AHB1ENR & 0x04) == 0);							//Wait till the bit is set
	GPIO_PORTC_PUPDR &= 0xFFF0FFFF;
	GPIO_PORTC_PUPDR |= 0x00050000;								//Enable pull-up
	GPIO_PORTC_IDR |= 0x01<<8;
	GPIO_PORTC_IDR |= 0x01<<9;
}

void SWITCH_INTERRUPT_EN(void)
{
	RCC_APB2ENR |= 0x00004000;										//Enable System configuration controller clock
	SYSCFG_EXTICR3 |= 0x0000022;									//select the source input for the EXTI8 and EXTI9 external interrupt.
	EXTI_IMR |= 0x00000300;												//Interrupt request from line 8 and 9 are not masked
	EXTI_FTSR |= 0x00000300;											//Falling trigger enabled (for Event and Interrupt) for input line.
/*		Enable NVIC Interrupt		*/
	NVIC_ISER0 |= 0x00800000;											//Enable interrupt for EXTI9_5 position 23
}


int main()
{
	LED_INIT();																//Initialize and configure LED
	SWITCH_INIT();														//Initialize and configure SW_UP and SW_DN
	SWITCH_INTERRUPT_EN();												//Enable interrupt on the Falling edge of UP and DOWN Switch
	while(1)
	{
		GPIO_PORTB_ODR |= (0x1<<13);								//Turn OFF the RED LED
		Delay(1000);
		GPIO_PORTB_ODR |= (0x1<<14);								//Turn OFF the RED LED
		Delay(1000);
//		if(flag == 1)															//check when the flag is set from interrupt
//		{
//			flag = 0;								  								//clear the flag variable
//			GPIO_PORTB_ODR &= ~(0x1<<13);						//Turn ON the RED LED
//			Delay(500);
//			GPIO_PORTB_ODR |= (0x1<<13);						//Turn OFF the RED LED
//		}
	}
}

void EXTI9_5_IRQHandler(void)
{
	if((EXTI_PR & 0x0100))
	{
		GPIO_PORTB_ODR &= ~(0x1<<13);								//Turn ON the RED LED
//		flag = 1;																	//set the flag
		EXTI_PR |= 0x100;														//Clear the pending register by setting the bit
	}
	if((EXTI_PR & 0x0200))
	{
		GPIO_PORTB_ODR &= ~(0x1<<14);
		EXTI_PR |= 0x200;
	}
}
