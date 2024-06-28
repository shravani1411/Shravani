/*9. Write a program to divide and print the quotient and reminder without using / and % operators.*/

#include<stdio.h>
int main()
{
	int n,count=0,d;
	printf("Enter numerator/ Denomenator values:\n");
	scanf("%d/%d",&n,&d);
	while(n>=d)
	{
		n=n-d;
		count++;
	}
	printf("\nReminder  = %d\nQuotient = %d\n",n,count);
}
