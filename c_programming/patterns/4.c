/* 4)
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1	*/

#include<stdio.h>

int main()
{
	int n=5,i,j;
	for(i=0;i<n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

