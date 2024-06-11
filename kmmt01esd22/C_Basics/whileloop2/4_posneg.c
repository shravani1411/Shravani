/*Read n values entered by the user, and print the sum of positive numbers and negative numbers separately.*/

#include<stdio.h>
int main()
{
	int i=1,n,v,P_Sum=0,N_Sum=0;
	printf("Enter no. of values to sum:\n");
	scanf("%d",&n);
	printf("Enter %d input values to sum:\n",n);
	while(i<=n)
	{
		scanf("%d",&v);
		if(v>=0)
		{
			P_Sum = P_Sum + v;
		}
		else if(v<0)
		{
			N_Sum = N_Sum + v;
		}
		i++;
	}
	printf("Sum of positive values: %d\nSum of negative values: %d\n",P_Sum,N_Sum);

}
