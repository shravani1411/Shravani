/*8) " Write a function that takes two sorted integer arrays as input, and returns an array of integers from both arrays in sorted order, excluding duplicate numbers. Arrays should not be sorted after merging. arrays should always stay sorted while they are being merged into another array.
Assume that the input arrays are sorted.
eg., array1 : 10,12,13,14,15,16
array2 : 9,12,15,19,20
output array3 : 9,10,12,13,14,15,16,19,20"*/

#include<stdio.h>
#include<stdlib.h>
int * merge_arrays(int a[],int b[],int n,int m);
int main()
{
	int i,n,m;
	printf("enter size of first array A \n");
	scanf("%d",&n);
	printf("enter size of second array B \n");
	scanf("%d",&m);
	int a[n],b[m],c[n+m];
	printf("enter first array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter second array elements:\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Array elements are\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\t",i,a[i]);
	}
	printf("\n");
	for(i=0;i<m;i++)
	{
		printf("b[%d]=%d\t",i,b[i]);
	}
	printf("\n");
	int *p = merge_arrays(a,b,n,m);
	for(i=0;i<(n+m);i++)
	{
		printf("c[%d]=%d\n",i,p[i]);
	}
	printf("\n");
}

int * merge_arrays(int a[],int b[],int n,int m)
{
	int i,j,k;
	int *c=(int *)malloc((n+m)*sizeof(int));
	i=0;j=0;k=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else if(a[i]>b[j])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else
		{
			c[k]=a[i];
			i++;
			j++;
			k++;
		}
	}
	while(i<n)
	{
		if(a[i]!=a[i+1])
		{
			c[k]=a[i];
			k++;
			i++;
		}
		else
		{
			c[k]=a[i];
			i=i+2;
		}
	}
	while(j<m)
	{
		if(b[j]!=b[j+1])
		{
			c[k]=b[j];
			k++;
			j++;
		}
		else
		{
			c[k]=b[j];

			j=j+2;
		}
	}
	return c;
}

