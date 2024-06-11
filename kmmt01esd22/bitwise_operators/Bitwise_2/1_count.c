/*WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?*/

#include<stdio.h>
int print_binary(int x);
int main()
{
	int x,a;
	printf("Enter a number:\n");
	scanf("%x",&x);
	a=print_binary(x);
	printf("No. of 1's in a given no.%d\n",a);
}

int print_binary(int x)
{
	int i,c=0;
	for(i=0;i<32;i++)
	{
		if(x&0x80000000){
			printf("1");
			c++;
		}
		else
			printf("0");
		x=x<<1;
	}
	printf("\n");
//	printf("\nNumber of 1's in an integer:%d\n",c);
return c;
}
