/*3)"Write the calculator program using a function that accepts a function pointer and the operand values as arguments and invokes it. In main function, simply invoke this function by sending appropriate function address, based on operator chosen.
	eg.,
	int main
	case '+' :invokeptr(add , x,y);

	invokeptr(int (*fptr) (int,int) , int x, int y)
	{
	printf(""%d\n"",fptr(x,y));
	}" */

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

void invokeptr(int (*fptr) (int,int) , int x, int y)
{
printf("%d\n",fptr(x,y));
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
	int (*p) (int ,int );
	switch(c)
	{
		case '+':invokeptr(add,x,y);
			break;
		case '-':invokeptr(sub,x,y);
			break;
		case '*':invokeptr(mul,x,y);
			break;
		case '/':invokeptr(div,x,y);
			break;
		case '%':invokeptr(mod,x,y);
	}
}
