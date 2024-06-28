
/*5)

5
4 4
3 3 3
2 2 2 2
1 1 1 1 1	*/

#include<stdio.h>

int main()
{
	int n=5,i,j;
	for(i=n;i>0;i--)
	{
		for(j=i;j<=n;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

