/*Write test bit() fun. func requires two 16 bit integer parameters.
1st parameter 16 bit value to test, 2nd is value in the range 0-15 describing which bit to test.fun return true if the corresponding bit contains the 1. fun returns false if that bit position contains a zero. func always returns false if the 2nd parameter holdes a value outsidethe range 0-15.*/

#include<stdio.h>
int testbit(unsigned int x,int p);
int main()
{
	unsigned int x;
	int p;
	printf("Enter 16 bit integer & position from 0-15 only:\n");
	scanf("%d%d",&x,&p);
	if(testbit(x,p))
		printf("True\n");
	else
		printf("False\n");
}

int testbit(unsigned int x,int p)
{
	if(p>=0&&p<=15)
	{
		if(x&0x0001<<p)
			return 1;
		else
			return 0;
	}
	else 
		return 0;
}

