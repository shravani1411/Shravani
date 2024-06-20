/*without using nested loops (using a single loop get the following pattern) :
 *
 * *
 * * *
 * * * *
 * * * * **/

#include<stdio.h>
int main()
{
	int i,j=0,n=5;
	for (i=1;i<=n;)
	{
		if(j<i)
		{
			printf("*");
			j++;
		}
		if(i==j)
		{
			printf(" \n");
			j=0;
			i++;
		}
}
}
