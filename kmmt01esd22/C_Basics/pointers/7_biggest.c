/*Write a program to find the biggest of three numbers using pointers that point to those numbers.*/

#include<stdio.h>
int main()
{
	int a,b,c,*p1,*p2,*p3;
	printf("enter the values:\n");
	scanf("%d%d%d",&a,&b,&c);
	p1=&a;
	p2=&b;
	p3=&c;
	if(*p1>*p2&&*p1>*p3)
	{
		printf("%d is bigger\n",*p1);
	}
	else if(*p2>*p3)
	{
		printf("%d is bigger\n",*p2);
	}
	else
	{
		printf("%d is bigger\n",*p3);
	}
}


