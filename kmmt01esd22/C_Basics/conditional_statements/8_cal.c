/*8)Write a calculator program that takes two integer numbers from user, and one of the operands +,-,*, / and % as a character and prints the appropriate result using if else based on the chosen operator character.

eg., input : 4 + 5
output: 9
input: 13 - 19
output: -6 */

#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter a,b values:\n");
	scanf("%d%d",&a,&b);
	printf("enter any one of the operator +,-,*,/,%%:\n");
	getchar();
	scanf("%c",&op);
	if(op=='+')
	{
		printf("%d+%d=%d\n",a,b,a+b);
	}
	else if(op=='-')
	{
		printf("%d-%d=%d\n",a,b,a-b);
	}
	else if(op=='*')
	{
		printf("%d*%d=%d\n",a,b,a*b);
	}
	else if(op=='/')
	{
		printf("%d/%d=%d\n",a,b,a/b);
	}
	else if(op=='%')
	{
		printf("%d%%%d=%d\n",a,b,a%b);
	}
	else
	{
		printf("entered input is invalid\n");
	}
}
