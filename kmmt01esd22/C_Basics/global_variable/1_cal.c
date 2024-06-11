/*Create the operand variables as global variables( 2 numbers) and use them in the operation functions (add, mul, sub, div) directly, without passing as arguments. Function returns the result as return value.*/

#include<stdio.h>
int a,b;
int addition(void)
{
	int add;
	add=a+b;
	return add;
}

int subtraction(void)
{
	int sub;	
	sub=a-b;
	return sub;
}

int multiplication(void)
{
	int mul;
	mul=a*b;
	return mul;
}

int division(void)
{
	int div;
	div=a/b;
	return div;
}

int module(void)
{
	int mod;
	mod=a%b;
	return mod;
}

int main()
{
	char ch;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	printf("enter the character:");
	getchar();
	scanf("%c",&ch);
	if(ch=='+')
	{
		printf("add=%d\n",addition());
	}
	if(ch=='-')
	{
		printf("sub=%d\n",subtraction());
	}
	if(ch=='*')
	{
		printf("mul=%d\n",multiplication());
	}
	if(ch=='/')
	{
		printf("div=%d\n",division());
	}
	if(ch=='%')
	{
		printf("mod=%d\n",module());
	}
}
