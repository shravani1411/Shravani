/*using do while loops :
 *
 * *
 * * *
 * * * *
 * * * * **/

#include<stdio.h>
int main()
{
	int i=1,j=1,n;
	do
	{
		n=8;
		do
		{
			n--;
		}
		while(n>=i);
			j=1;
		do
		{
			printf("*");
			j++;
		}
		while(j<=i);
		printf(" \n");
		i++;
	}
	while(j<=5);
}
