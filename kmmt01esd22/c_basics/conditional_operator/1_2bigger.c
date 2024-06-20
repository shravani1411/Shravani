//1) Read 2 numbers and print which of them is bigger.

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	printf("%d is bigger\n",a>b?a:b);
}
