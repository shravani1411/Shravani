/*WAP to print a range of prime numbers. Use macro,to find if a number is prime or not.*/

#include<stdio.h>
#define PRIME(i) for(j=1;j<=i;j++){\
	if(i%j==0){\
		c++;\
	}}\

int main()
{
	int i,e,c=0,j,s;
	printf("Enter start and end  value range to get the prime numbers:\n");
	scanf("%d%d",&s,&e);
	for (i=s;i<=e;i++)
	{
		c=0;
		PRIME(i)
		if(c==2)
			printf("%d is prime\n",i);
	}
}
