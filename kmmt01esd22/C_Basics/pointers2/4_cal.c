/*Write a function that can take two integers as input, and gives 5 outputs : addition, subtraction, multiplication, quotient and reminder of those two numbers. Print the outputs in the main function.*/

#include<stdio.h>
void cal(int a,int b,int *add, int *sub,int *mul,int *div,int *mod);
int main()
{
	int a,b,add,sub,mul,div,mod;
	printf("enter the values:\n");
	scanf("%d%d",&a,&b);
	cal(a,b,&add,&sub,&mul,&div,&mod);
	printf("add=%d\nsub=%d\nmul=%d\ndiv=%d\nmod=%d",add,sub,mul,div,mod);
}

void cal(int a,int b,int *add, int *sub,int *mul,int *div,int *mod)
{
//	static int *p;
	*add=a+b;
	*sub=a-b;
	*mul=a*b;
	*div=a/b;
	*mod=a%b;
}



