/*
   1
   2    3
   4    5   6
   7    8   9    10
   11   12  13   14  15 */

#include<stdio.h>
int main()
{
	int i=1,j,a=1,n=5;
	do
	{
		j=1;
		do
		{
			printf(" %d",a);
			a++;
			j++;
		}
		while(j<=i);
		printf(" \n");
		i++;
	}
	while(i<=n);
}
