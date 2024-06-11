/*read n positive numbers from the user and find their sum. If user enters negative number, it should not be counted or added.*/

#include<stdio.h>
int main()
{
	int f=1,v,sum=0;
	printf("Enter input values to sum:\n");
	while(f)
	{		
		scanf("%d",&v);
		if(v<0)
printf("enter positive number:\n");
		
		else if(v>0)
		{
			sum=sum+v;
}
			else
f=0;
		
	}
	printf("Sum of all input numbers : %d\n",sum);
	
}
