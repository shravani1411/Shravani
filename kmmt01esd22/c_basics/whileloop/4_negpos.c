/*Write a program to read the number of inputs ,and then read those many numbers and print if each number is positive ,negative or zero.*/

#include<stdio.h>
int main()
{
	int n,i,x;
	n=3;
	i=0;
	while(i<n)
	{
		printf("enter a number:");
		scanf("%d",&x);
		if(x>0)
			printf("entered number is positive\n");
		else if(x<0)
			printf("entered number is negative\n");
		else
			printf("entered number is zero\n");
		i++;
	}
}

