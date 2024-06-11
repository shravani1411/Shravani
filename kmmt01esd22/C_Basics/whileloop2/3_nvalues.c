/*Read n values entered by the user and find the sum of the values and print.*/

#include<stdio.h>
int main()
{
	int i=1,n,sum=0,v;
	printf("Enter the no. of values to sum:\n");
	scanf("%d",&n);
	printf("Enter %d input values to sum:\n",n);
	while(i<=n)
	{
		scanf("%d",&v);
		sum=sum+v;
		i++;
	}
	printf("Sum of given inputs : %d\n",sum);
}
