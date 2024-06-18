/*6)For one type of mobile service if the cost is 250/- up to 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read a number of calls made and compute and print the bill.*/

#include<stdio.h>
int main()
{
	int call,a,cost=250;
	printf("enter values:");
	scanf("%d",&call);
	if(call<=100)
	{
		printf("%d\n",cost);
	}
	else if(call>100)
	{
		a=cost+(1.25*(call-100));
		printf("%d\n",a);
	}
	return 0;
}
