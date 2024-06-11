//9) WAP to print Binary equivalent of an integer using recursion without using any array variable.

#include<stdio.h>

void print_binary(int n,int base);

int main()
{
	int n;
	printf("Enter the n value :\n");
	scanf("%d",&n);
	int base = 2;
	print_binary(n,base);
	printf("\n");
}

void print_binary(int n,int base)
{
	int remainder = n%base;
	if(n == 0)
		return;
	print_binary(n/base,base);
	if(remainder < 2)
		printf("%d",remainder);
}

