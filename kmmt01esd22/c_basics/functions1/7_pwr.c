/*7. Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.*/

#include<stdio.h>
int power(int b,int p)
{
	int n=1,i;
	for(i=1;i<=p;i++){
		n*=b;

	}
	return n;
}

int main()
{
	int b,p,x;
	printf("enter base & power:\n");
	scanf("%d\n%d",&b,&p);
	x=power(b,p);
	printf("%d\n",x);
}

