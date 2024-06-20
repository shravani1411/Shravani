/*Write a function to take a number and return its square, without using * operator.*/

#include<stdio.h>
int square(int a)
{
	int i,c=0,b=a;
	while(b!=0)
	{
		c=c+a;
		--b;
	}
	return c;
}

int main()
{
	int a,c;
	printf("enter the number:\n");
	scanf("%d",&a);
	c=square(a);
	printf("%d\n",c);
}
