
//Write a program to read 2 integers, and print all prime numbers between both the integers.

#include<stdio.h>

int main()
{
	int s,e,i,j,c;
	printf("enter the starting & ending numbers:\n");
	scanf("%d%d",&s,&e);
	printf("prime numbers:\n");
	for(i=s;i<=e;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}

		}
		if(c==2)
		{
			printf("%d\n",i);
		}
	}

}
