/*Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.*/

#include<stdio.h>
int power(int n,int a)
{
	int p=1,i;
	for(i=1;i<=n;i++){
		p=a*p;

	}
	return p;
}

int main()
{
	int a,n,x;
	printf("enter the values:\n");
	scanf("%d\n%d",&a,&n);
	x=power(n,a);
	printf("%d\n",x);
}

