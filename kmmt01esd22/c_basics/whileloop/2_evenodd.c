/*Write a program to print all odd numbers first and even numbers next in a single program between two given numbers.*/

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter n & i values:\n");
	scanf("%d%d",&n,&i);
          j=i;
	while(i<=n)
	{

		if(i%2)
		{
			printf("odd number %d:\n",i);
		}
		i++;
	}
	while(j<=n)	
	{	
		if(j%2==0)
		{
			printf("even number %d:\n",j);
		}
		j++;
	}
}
