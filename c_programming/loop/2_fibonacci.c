/* Write a program to print the first n Fibonacci numbers.

   Eg., First 8 Fibonacci numbers are :
   1  1  2  3  5  8  13  21	*/

#include<stdio.h>

int main()
{
	int n,i,a=0,b=1,c;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(i<=1)
		{
			printf("%d\t",i);
		}
		else
		{
			c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
		}
	}
	printf("\n");
}
