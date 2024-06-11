//1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.

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
	printf("Enter the character:\n");
	getchar();
	scanf("%c",&c);
	int (*p) (int ,int );
	if(c=='+'){
		p=add;
		printf("Addition:%d\n",p(x,y));
	}
	else if(c=='-'){
		p=&sub;
		printf("Subtraction:%d\n",(*p)(x,y));}
	else if(c=='*'){
		p=mul;
		printf("Multiplication:%d\n",p(x,y));
	}
	else if(c=='/'){
		p=&div;
		printf("Division:%d\n",(*p)(x,y));
	}
	else if(c=='%'){
		p=mod;
		printf("Module:%d\n",p(x,y));
	}
}

