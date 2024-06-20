/*Write a program to swap two numbers using Call by Value and Call by Reference.*/

#include<stdio.h>
void swapcbv(int a,int b);
void swapcbr(int *,int *);
int main()
{
	int a,b;
	printf("enter a&b values:\n");
	scanf("%d%d",&a,&b);
	printf("before swap cbv: a=%d,b=%d\n",a,b);
	swapcbv(a,b);
	printf("after swap cbv: a=%d,b=%d\n",a,b);
	swapcbr(&a,&b);
	printf("after swap cbr: a=%d,b=%d\n",a,b);
}

void swapcbv(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void swapcbr(int *p1,int *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}

