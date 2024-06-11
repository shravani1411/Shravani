/*Write a program to print all numbers from 1 to a given number.*/
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number:");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
}
