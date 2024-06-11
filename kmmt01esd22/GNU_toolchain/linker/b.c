#include<stdio.h>
extern int y;
void fun(void)
{
	printf("fun()\n");
	printf("%d\n",y);
}
