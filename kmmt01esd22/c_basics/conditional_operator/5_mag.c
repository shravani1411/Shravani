//5) Read a number and print its magnitude (only number without sign)

#include<stdio.h>
int main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	printf("%d\n",a>0?a:(a=0-a));
}

