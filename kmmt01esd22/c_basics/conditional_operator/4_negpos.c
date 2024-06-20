//4) Read a number and print if it is a negative number or positive number or zero.

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	a>0?printf("no. %d is +ve\n",a):a<0?printf("no. %d is -ve\n",a):printf("the no. is %d\n",a);
}
