/*1. Write a program to find the factorial of a given number.
  N! = n * n-1 * n-2 * …. 2 * 1
  eg., input: 5
output: 1*2*3*4*5* = 120*/

#include<stdio.h>
int main()
{
	int n,f=1;
	printf("enter the number:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		f=f*n;
		n--;
	}
	printf("%d\n",f);
	return 0;
}

