/*using while for loops :
 *
 * *
 * * *
 * * * *
 * * * * **/

#include<stdio.h>
int main()
{
	int i,j,n=5;
	i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}
