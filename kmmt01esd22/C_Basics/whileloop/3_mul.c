/*Write a program to print the multiplication table for a given number.*/

#include<stdio.h>
int main()
{
	int i,n,x,y;
	n=10;
	printf("enter the number:");
	scanf("%d",&x);
	i=1;
	while(i<=n)
	{
		y=x*i;
		printf("%d*%d=%d\n",x,i,y);
		i++;
	}
}
