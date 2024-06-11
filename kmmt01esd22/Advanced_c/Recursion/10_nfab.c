//10) Print the first n Fibonacci numbers.

#include<stdio.h>

int fabinocci(int n);

int main()
{
	int i,n,f;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=fabinocci(i);
		printf("%d   ",f);
	}
	printf("\n");
}

int fabinocci(int n)
{
	static int i=1,j=1;
	int k;
	k=i+j;
	j=i;
	i=k;
	if(n==1 || n==2)
		return 1;
	else
		return fabinocci(n-1)+fabinocci(n-2);
}

