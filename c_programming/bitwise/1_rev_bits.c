
#include<stdio.h>

int main()
{
	int b;
	printf("enter a number:");
	scanf("%x",&b);
	int i;
	for(i=0;i<8;i++)
	{
		if(b&0x01)
			printf("1");
		else
			printf("0");
		b=b>>1;
	}
	printf("\n");
}
