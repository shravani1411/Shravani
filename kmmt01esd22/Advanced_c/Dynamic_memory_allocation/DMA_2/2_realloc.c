/*2) Implement your own realloc function using malloc and free using below steps: 
  - Allocate memory for new size using malloc
  - copy data from old address to new address
  - release the old address
  - return the new address*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n=10;
	int i;
	p=(int *)malloc(n*sizeof(int));
	printf("%p\n",p);
	for(i=0;i<n;i++)
	{
		p[i]=i+1;
		printf("%d\t",p[i]);
	}
	printf("\n");
	int *p1=(int *)realloc(p,(n*10000)*sizeof(int));
	printf("%p\n",p1);
	for(i=0;i<n+10;i++)
		printf("%d\t",p1[i]);
	printf("\n");
}
