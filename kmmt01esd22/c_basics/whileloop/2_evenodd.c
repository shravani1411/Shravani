/*2. Write a program to print all odd numbers first and even numbers next in a single program between two given numbers.*/

#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter i & n values:\n");
	scanf("%d%d",&i,&n);
	j=i;
	printf("all odd numbers:\n");
	while(i<=n)
	{

		if(i%2)
		{
			printf("%d\n",i);
		}
		i++;
	}
	printf("all even numbers:\n");
	while(j<=n)	
	{	
		if(j%2==0)
		{
			printf("%d\n",j);
		}
		j++;
	}
}
