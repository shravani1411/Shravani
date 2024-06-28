
#include<stdio.h>

int main()
{
	int i,n,c;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==(n/2)+1)		
	{
		printf("prime\n");
	}
	else
		printf("not prime\n");
}

