/*Create the operand variables as global variables and use them in the operation functions directly, without passing as arguments. Function return value should be stored in another global variable and be printed in main.*/

#include<stdio.h>
int a,b,c;
void addition()
{

	c=a+b;
}

void subtraction()
{

	c=a-b;
}

void multiplication()
{
	c=a*b;
}

void division()
{	
	c=a/b;
}

void module()
{
	c=a%b;
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
		addition();
		printf("add=%d\n",c);
	}
	if(ch=='-')
	{
		subtraction();
		printf("sub=%d\n",c);
	}
	if(ch=='*')
	{
		multiplication();
		printf("mul=%d\n",c);
	}
	if(ch=='/')
	{
		division();
		printf("div=%d\n",c);
	}
	if(ch=='%')
	{
		module();
		printf("mod=%d\n",c);
	}
}
