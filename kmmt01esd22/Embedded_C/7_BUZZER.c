//Whenever SW_ENT Press turn ON BUZZER up to 250msec and Turn OFF BUZZER.

#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIO_PORTB_MODE *((int *)0x40020400)
#define GPIO_PORTB_ODR *((int *)0x40020414)
#define GPIO_PORTC_IDR *((int *)0x40020810)
#define GPIO_PORTC_MODE *((int *)0x40020800)
#define GPIO_PORTC_PUPDR *((int *)0x4002080c)
	
void delay()
	{
	int i;
		for(i=0;i<450000;i++);
	}

void LED_INIT();
void SWITCH_INIT();
int main()
              {
                           LED_INIT();
                           SWITCH_INIT();
                           while(1)
                           {
                           if(!(GPIO_PORTC_IDR&(0x1<<10)))
                           {
                           GPIO_PORTB_ODR |=(0x1<<12);
														 delay();
                           } 
													 GPIO_PORTB_ODR &=~(0x1<<12);
              }
						}
							
              void LED_INIT()
              {
              RCC_AHB1ENR |=0x02;
                           while((RCC_AHB1ENR & 0x02)==0);
								           GPIO_PORTB_MODE &=0xFCFFFFFF;
                           GPIO_PORTB_MODE |=0x01000000;
              }
							
              void SWITCH_INIT()
              {
              RCC_AHB1ENR |=0x04;
                           while((RCC_AHB1ENR&0x04)==0);
                           GPIO_PORTC_MODE &=0xFFCFFFFF;
                           GPIO_PORTC_PUPDR |=0x00100000;
              }
							