/*Write a program to read 2 integers, and print all prime numbers between both the integers.*/

#include<stdio.h>
int main()
{
	int p,e,c=0,j,s;
	printf("Enter start and end  value range to get the prime numbers:\n");
	scanf("%d%d",&s,&e);
	for (p=s;p<=e;p++)
	{
		c=0;
		for(j=1;j<=p;j++)
		{
			if(p%j==0)
			{
				//printf("%d\n",i);
				c++;
			}
		}
		if(c<=2)
		{
			printf("%d is a  Prime number\n",p);
		}
	}
}   
