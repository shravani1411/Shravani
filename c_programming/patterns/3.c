
/*3)
 
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5	*/

#include<stdio.h>

int main()
{
	int n=5,i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

