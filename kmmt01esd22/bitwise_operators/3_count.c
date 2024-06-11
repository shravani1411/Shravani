/*WAP to count the bits set (bit value 1 ) in an integer? Find out and compare different possibilities?*/

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
	int i,c=0;
	for(i=0;i<8;i++)
	{
		if(x& 0x80){
			printf("1");
			c++;
		}
		else
			printf("0");
		x=x<<1;
	}
	printf("\nNumber of 1's in an integer:%d\n",c);
}
