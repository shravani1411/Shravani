/*4) Create the array dynamically, read the data for the array, and use the above function in Q3 to find the biggest number in that array.*/

#include<stdio.h>
#include<stdlib.h>
int print_biggest(int *p,int n);
int main()
{
	int i,b,n;
	printf("Enter the size:\n");
	scanf("%d",&n);
	int *p=(int *)malloc(n*sizeof(int));
	printf("Enter the inputs:\n");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]=",i);
		scanf("%d",&p[i]);
	}
	b=print_biggest(p,n);
	printf("Biggest:arr[%d]=%d\n",b,p[b]);
}

int print_biggest(int *p,int n)
{
	int i,j=0,biggest;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			biggest=p[i];
		}
		else
		{
			if(p[i]>biggest)
			{
				biggest=p[i];
				j=i;
			}
		}
	}
	return j;
}
