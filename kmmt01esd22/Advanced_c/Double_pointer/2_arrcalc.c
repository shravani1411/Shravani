//2)Rewrite the calculator program using array of function pointers.

#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}

int mul(int a,int b)
{
	return a*b;
}

int div(int a,int b)
{
	return a/b;
}

int mod(int a,int b)
{
	return a%b;
}

int main()
{
	int x,y;
	char c;
	printf("Enter 2 numbers:\n");
	scanf("%d%d",&x,&y);
	printf("Enter the operator:");
	getchar();
	scanf("%c",&c);
	int (*p[5]) (int ,int )={add,sub,mul,div,mod};
	switch(c)
	{
		case '+':
			printf("Addition:%d\n",p[0](x,y));
			break;
		case '-':
			printf("Subtraction:%d\n",(*p[1])(x,y));
			break;
		case '*':
			printf("Multiplication:%d\n",p[2](x,y));
			break;
		case '/':
			printf("Division:%d\n",(*p[3])(x,y));
			break;
		case '%':
			printf("Module:%d\n",p[4](x,y));
	}
}

