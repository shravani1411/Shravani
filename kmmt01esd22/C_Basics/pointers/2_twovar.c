/*Write a program to add two variables using thier pointers.*/

#include<stdio.h>
int main()
{
	int a,b,*p1,*p2;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	p1=&a;
	p2=&b;
	printf("addition of 2 variables=%d\n",*p1+*p2);
}
