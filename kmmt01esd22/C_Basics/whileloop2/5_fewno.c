/*read few numbers entered by the user and print the sum of the numbers , stop whenever a negative number is entered. Print the number of values entered. Print their average.*/

#include<stdio.h>
int main()
{
	int f=1,v,sum=0,n=0;
	printf("Enter input values to sum:\n");
	while(f)
	{		
		scanf("%d",&v);
		if(v<0)
			f=0;
		else
		{
			sum=sum+v;
			n++;
		}	
	}
	printf("Sum of all input numbers : %d\n",sum);
	printf("Average of all numbers : %.3f\n",(float)sum/n);
}
