/*1) Write a flow chart for the below problem and write program:

Write a program to input n numbers and print the largest and smallest numbers out of them.

Eg., 3,23,56,34,78,45,26,90,68,77
Biggest Number is 90
Smallest Number is 3*/

#include<stdio.h>
int main()
{
	int i,n,biggest,smallest,a;
printf("Enter the size:");
scanf("%d",&n);
		printf("Enter the inputs:\n");
for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		if(i==0)
		{
			biggest=a;
			smallest=a;
		}
		else
		{
			if(a>biggest)
			{
				biggest=a;
			}
			if(a<smallest)
			{
				smallest=a;
			}
		}
	}
	printf("biggest no. is %d\n",biggest);
	printf("smallest no. is %d\n",smallest);
}

