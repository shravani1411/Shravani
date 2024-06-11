//8) Write a recursive function that returns the reverse of an integer.

#include <stdio.h>
int sum=0,r;
int reverse(int n)
{
	if(n)
	{
		r=n%10;
		sum=sum*10+r;
		reverse(n/10);
	}
	else
		return sum;
	return sum;
}

int main()
{
	int n,rev;
	printf("Enter any number:");
	scanf("%d",&n);
	rev=reverse(n);
	printf("The reverse of entered number is :%d\n",rev);
	return 0;
}
