/*for a given n = 5
 *
 * * *
 * * * * *
 * * * * * * *
 * * * * * * * * *
 * * * * * * *
 * * * * *
 * * *
 *
 */

#include<stdio.h>
int main()
{
	int i,j,n=5,k;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	n=4;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=(n-i)+1;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

