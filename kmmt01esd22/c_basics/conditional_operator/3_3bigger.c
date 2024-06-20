//3) Read 3 numbers and print which of them is the biggest.

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b & c values:\n");
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d is bigger\n",d);
}
