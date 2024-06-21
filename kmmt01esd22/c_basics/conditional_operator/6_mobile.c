//6)For one type of mobile service if the cost is 250/- up to 100 calls and 1.25/- for each call made over and above 100 calls. Write a program to read a number of calls made and compute and print the bill.

#include<stdio.h>
int main()
{
	int call,cost=250;
	float a;
	printf("enterno. of:wq calls:\n");
	scanf("%d",&call);
	printf("%f\n",call<=100?a:(a=cost+(1.25*(call-100))));
}



