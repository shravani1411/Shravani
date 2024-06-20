//12) an array contains some numbers. You need to find out how many times the biggest number has occurred in that array by incrementing the array without using index. You can find the biggest number, and also count it in a single loop.

#include<stdio.h>
int big(int s[],int n);
int z;
int main()
{
	int n,c,i;
	printf("size\n");
	scanf("%d",&n);
	int a[n];
	printf("ENTER ARRAY\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=big(a,n);
	printf("biggest::%docuurence:: %d\n",c,z);
}

int big(int s[],int n)
{
	int b=0,c=n;
	int *S=s;
	for(;n>0||c>0;++s,n--)
	{
		if(n>0&&*s>=b)
			b=*s;
		else if(n<=0&&b==*S)
		{
			z++;
			c--;
			S++;
		}
		else
		{
			c--;
			S++;
		}
	}
	return b;
}

