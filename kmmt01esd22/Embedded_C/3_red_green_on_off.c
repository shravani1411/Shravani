/*Whenever SW_UP is pressed RED LED is ON, whenever SW_DN is pressed GREEN LED is ON.
Assign breakpoints after if condition and click run button in debugger window. Whenever SW1/SW2 presses program stops at any one of the breakpoint.*/

#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIO_PORTC_IDR *((int *)0x40020810)
#define GPIO_PORTC_MODE *((int *)0x40020800)
#define GPIO_PORTC_PUPDR *((int *)0x4002080c)
#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIO_PORTB_MODE *((int *)0x40020400)
#define GPIO_PORTB_ODR *((int *)0x40020414)
#define GPIO_PORTC_IDR *((int *)0x40020810)
#define GPIO_PORTC_MODE *((int *)0x40020800)
#define GPIO_PORTC_PUPDR *((int *)0x4002080c)

void LED_INIT();
void SWITCH_INIT();

int main()
              {
                           LED_INIT();
                           SWITCH_INIT();
                           while(1)
                           {
                           if(!(GPIO_PORTC_IDR&(0x1<<8)))
                           {
                           GPIO_PORTB_ODR &=~(0x1<<13);
                           }
                           if(!(GPIO_PORTC_IDR&(0x1<<9)))
                           {
                           GPIO_PORTB_ODR &=~(0x1<<14);
                           }
                           }
              }

              void LED_INIT()
              {
              RCC_AHB1ENR |=0x02;
                           while((RCC_AHB1ENR & 0x02)==0);
                           GPIO_PORTB_MODE |=0x14000000;
                           GPIO_PORTB_ODR |= 0x1<<13;
                           GPIO_PORTB_ODR |=0x1<<14;
              }
							
              void SWITCH_INIT()
              {
              RCC_AHB1ENR |=0x04;
                           while((RCC_AHB1ENR&0x04)==0);
                           GPIO_PORTC_MODE &=0xFFF0FFFF;
                           GPIO_PORTC_PUPDR |=0x00050000;
              }