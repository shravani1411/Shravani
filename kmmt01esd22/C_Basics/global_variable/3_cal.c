/*send operand variables to operation functions as arguments. store the output from operation functions in a global variable. print the value in main function.*/

#include<stdio.h>
int c;
void addition(int a,int b)
{

	c=a+b;
}

void subtraction(int a,int b)
{

	c=a-b;
}

void multiplication(int a,int b)
{
	c=a*b;
}

void division(int a,int b)
{	
	c=a/b;
}

void module(int a,int b)
{
	c=a%b;
}

void addition(int a,int b);
void subtraction(int a,int b);
void multiplication(int a,int b);
void division(int a,int b);
void module(int a,int b);
int main()
{
int a,b;
	char ch;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	printf("enter the character:");
	getchar();
	scanf("%c",&ch);
	if(ch=='+')
	{
		addition(a,b);
		printf("add=%d\n",c);
	}
	if(ch=='-')
	{
		subtraction(a,b);
		printf("sub=%d\n",c);
	}
	if(ch=='*')
	{
		multiplication(a,b);
		printf("mul=%d\n",c);
	}
	if(ch=='/')
	{
		division(a,b);
		printf("div=%d\n",c);
	}
	if(ch=='%')
	{
		module(a,b);
		printf("mod=%d\n",c);
	}
}
