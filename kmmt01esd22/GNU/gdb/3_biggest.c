#include<stdio.h>
int biggest(int a,int n);
int main()
{
	int n,a;
	printf("enter n value:\n");
	scanf("%d",&n);
	printf("enter values:\n");
	scanf("%d",&a);
	biggest(a,n);
}

void biggest(int a,int n)
{
	int b,i=1;
	b=a;
	while(i<=n-1)
	{
		scanf("%d",&a);
		if(a>b)
		{
			b=a;
		}
		i++;
	}
	printf("biggest value is %d\n",b);
}
