//1) Read 2 numbers and print which of them is bigger.

#include<stdio.h>

int main()
{
	int a,b;
	printf("Enter a,b values:\n");
	scanf("%d%d",&a,&b);
	if(a>b)
		printf("%d is greater\n",a);

	else
		printf("%d is greater\n",b);
}
