/*WAP whether a number is a power of 2 or not?*/

#include<stdio.h>
void binary(char);
int main()
{
	int x;
	printf("enter x value:");
	scanf("%d",&x);
	binary(x);
}
void binary(char x)
{
	int b;
	for(int i=0;i<8;i++)
	{
		if(x&0x80)
		{
			printf("1");
			b++;
		}
		else
		{
			printf("0");
		}
		x=x<<1;
	}
	printf("\n");
	printf("b=%d\n",b);
	if(b==1)
		printf("it is a power of 2\n");
	else
		printf("not power of 2\n");
}
