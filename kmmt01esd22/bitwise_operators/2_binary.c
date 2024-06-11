/*WAP print binary?*/

#include<stdio.h>
void print_binary(char x);
int main()
{
	int x;
	printf("Enter a number:\n");
	scanf("%x",&x);
	print_binary(x);
}

void print_binary(char x)
{
	int i;
	for(i=0;i<8;i++)
	{
		if(x& 0x80)
			printf("1");
		else
			printf("0");
		x=x<<1;
	}
	printf("\n");
}
