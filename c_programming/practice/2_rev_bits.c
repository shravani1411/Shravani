
#include<stdio.h>

int main()
{
	int b,r;
	printf("enter the bits:");
	scanf("%d",&b);
	while(b!=0)
	{
		r=b%10;
		b=b/10;
			printf("%d",r);
	}
	printf("\n");
}
