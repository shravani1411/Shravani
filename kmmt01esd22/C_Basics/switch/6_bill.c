/*Find the power bill for the input number of units :
	0 - 200 units : 100/- min
	201 - 400 units : 100 + 0.65 per unit excess of 200
	401 - 600 units : 230 + 0.80 per unit excess of 400
	601 and above units : 390 + 1.00 per unit excess of 600*/

#include<stdio.h>
int main()
{
	int a;
	float bill=100;
	printf("enter a number:\n");
	scanf("%d",&a);
	switch(a<=200)
	{
		case 1:
			       printf("%f\n",bill=100);
break;
		case 0:if(a<=400)
		       {
			       printf("%f\n",bill=100+0.65*(a-200));
		       }
		else if(a<=600)
		       {
			       printf("%f\n",bill=230+0.8*(a-400));
		       }
		else
		       {
			       printf("%f\n",bill=390+1*(a-600));
		       }
	}
}
