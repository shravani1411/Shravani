/*WAP print reverse of integer number? */

#include<stdio.h>
void reverse_binary(char x);

int main()
{
	int x;
	{
		printf("Enter number\n");
		scanf("%x",&x);
		reverse_binary(x);
		return 0;
	}
}

void reverse_binary(char x)
{
	int i;
	for(i=0;i<8*sizeof(x);i++)
	{
		if(x&0x01)
			printf("1");
		else
			printf("0");
		x=x>>1;
	}
	printf("\n");
}

