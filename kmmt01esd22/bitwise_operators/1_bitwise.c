#include<stdio.h>
#define SET_BIT(x,p) x|(0x1<<p)
#define CLEAR_BIT(x,p) x&(~(0x1<<p))
#define TOGGLE_BIT(x,p) x^(0x1<<p)
int main()
{
	int x,p;
	printf("Enter number & position:\n");
	scanf("%d%x",&x,&p);
	printf("After set:%d\n",SET_BIT(x,p));
	printf("After clear:%x\n",CLEAR_BIT(x,p));
	printf("After toggle:%x\n",TOGGLE_BIT(x,p));
}

