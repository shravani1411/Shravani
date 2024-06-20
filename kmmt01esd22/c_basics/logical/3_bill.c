/*Find the power bill for the input number of units :
0 - 200 units : 100/- min
201 - 400 units : 100 + 0.65 per unit excess of 200
401 - 600 units : 230 + 0.80 per unit excess of 400
601 and above units : 390 + 1.00 per unit excess of 600*/

#include<stdio.h>
int main()
{
	int a;
	float bill;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a<=200)
	{
		printf("%f\n",bill=100);
	}
	else if(201<=a&&a<=400)
	{
		printf("%f\n",bill=100+0.65*(a-200));
	}
	else if(401<=a&&a<=600)
	{
		printf("%f\n",bill=230+0.8*(a-400));
	}
	else if(601<=a)
	{
		printf("%f\n",bill=390+1*(a-600));
	}
}
