/*Modify the calculator program - with functions ,Add(),Sub(),Mul(),Div(),Mod(). Each function should take the inputs as parameters and return the result as output.
Hint: int add(int , int);
int sub (int, int);*/

#include<stdio.h>
int addition(int a,int b)
{
	int add;
	add=a+b;
	return add;
}

int subtraction(int a,int b)
{
	int sub;
	sub=a-b;
	return sub;
}

int multiplication(int a,int b)
{
	int mul;
	mul=a*b;
	return mul;
}

int division(int a,int b)
{
	int div;
	div=a/b;
	return div;
}

int module(int a,int b)
{
	int mod;
	mod=a%b;
	return mod;
}

int main()
{
	int a,b,add,sub,div,mul,mod;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	add=addition(a,b);
	sub=subtraction(a,b);
	mul=multiplication(a,b);
	div=division(a,b);
	mod=module(a,b);
	printf("add=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d\n",add,sub,mul,div,mod);
}
