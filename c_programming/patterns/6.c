
/*6)

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1	*/

#include<stdio.h>

int main()
{
	int n=5,i,j;
	for(i=n;i>0;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

