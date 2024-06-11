
#include<stdio.h>

int main()
{
	int d,i=0,r,l,arr[32];
	printf("enter a number:");
	scanf("%d",&d);
	while(d!=0)
	{
		r=d%8;
		d=d/8;
		arr[i]=r;
		l=++i;
		printf("%d\t%d\n",l,i);
	}
	for(i=l-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
}
