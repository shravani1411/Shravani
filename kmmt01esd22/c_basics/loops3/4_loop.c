/*Priint the below format
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1*/

#include<stdio.h>
int main()
{
	int i,j,n=5,c=1;
	for (i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",c);
			c=!c;
		}
		c=i%2;
		printf("\n");
	}
}
