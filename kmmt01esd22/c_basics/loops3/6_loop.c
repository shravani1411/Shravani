/*
   5
   5 4
   5 4 3
   5 4 3 2
   5 4 3 2 1 */
#include<stdio.h>
int main()
{
	int i,j,n=5,a,y;
	for(i=1;i<=n;i++)
	{
		j=1;
		for(j=1,a=0;j<=i;a++,j++)
		{
			y=n-a;
			printf("%d",y);
		}
		printf(" \n");
	}
}
