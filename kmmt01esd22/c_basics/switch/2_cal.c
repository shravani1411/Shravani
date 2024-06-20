/*Write the calculator program using switch case statement.*/

#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	printf("enter the operator:\n");
	getchar();
	scanf("%c",&op);
	switch(op)
	{
		case '+':printf("%d+%d=%d\n",a,b,a+b);
			 break;
		case '-':printf("%d-%d=%d\n",a,b,a-b);
			 break;
		case '*':printf("%d*%d=%d\n",a,b,a*b);
			 break;
		case '/':printf("%d/%d=%d\n",a,b,a/b);
			 break;
		case '%':printf("%d%%%d=%d\n",a,b,a%b);
			 break;
		default:printf("it is not an operator\n");
	}
}
