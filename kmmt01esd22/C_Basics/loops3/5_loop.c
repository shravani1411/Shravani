/*
   5
   4 4
   3 3 3
   2 2 2 2
   1 1 1 1 1 */

#include<stdio.h>
int main()
{
	int i=1,j,n=5,a=0,y;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			y=n-a;
			printf("%d",y);
			j++;
		}
		a++;
		printf(" \n");
		i++;
	}
}

