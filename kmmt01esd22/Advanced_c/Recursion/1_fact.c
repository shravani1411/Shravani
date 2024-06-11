//1) Write a program to find the factorial of a number.

#include<stdio.h>

int fact(int n)
{
	static int p=1;
	if(n==0)
		return p;
	p=p*n;
	return fact(n-1);
}

int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("%d\n",fact(n));
}
