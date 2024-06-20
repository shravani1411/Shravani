//5) Read a number and print its magnitude (only number without sign)

#include<stdio.h>

int main()
{
	int a;
	printf("enter a value\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("%d\n",a);
	}
	if(a<0)
	{
		a=0-a;
		printf("%d\n",a);
	}
}
