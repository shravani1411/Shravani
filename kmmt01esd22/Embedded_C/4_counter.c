/*Use “SW_ENT” and declare “counter” global variable. Your program should increment counter by one, every time switch is pressed. 
Note how the value of counter changes on each “ENTER SWITCH” press. Use debugger and add Counter to “Watch Expression” window. Does the value of counter increment by one always?
Note: Define counter as a global variable and in debug perspective use continuous refresh option (You will find Continuous Refresh button on top of the Expression Window). You can use step debugging or breakpoints to check the variable value.
Hint: To add variable to Expression Window, select and right click the variable name and select “Add Watch Expression”. To view Expression Window, click on View button from Keil menu bar and select Expressions.*/

#define RCC_AHB1ENR *((int *)0x40023830)
#define GPIO_PORTC_IDR *((int *)0x40020810)
#define GPIO_PORTC_MODE *((int *)0x40020800)
#define GPIO_PORTC_PUPDR *((int *)0x4002080c)

void SWITCH_INIT();
void delay(void);
int counter=0;
int main()
              {
                           SWITCH_INIT();
                           while(1)
                           {
                           if(!(GPIO_PORTC_IDR&(0x1<<8)))
                           {
                           counter++;
														 delay();
                           }
                           if(!(GPIO_PORTC_IDR&(0x1<<9)))
                           {
                           counter++;
														 delay();
                           }
                           }
              }

              void SWITCH_INIT()
              {
              RCC_AHB1ENR |=0x04;
                           while((RCC_AHB1ENR&0x04)==0);
                           GPIO_PORTC_MODE &=0xFFF0FFFF;
                           GPIO_PORTC_PUPDR |=0x00050000;
              }
	
void delay(void)
	{
		int i;
		for(i=0;i<2000000;i++)
		{
			;
		}
	}
	