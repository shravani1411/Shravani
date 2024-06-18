/*10)Find the % of marks for 6 subjects (read 6 subject marks and calculate percentage), for a student, and print the grade of the student as per below division , using if else statement.
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail */

#include<stdio.h>
int main()
{
	int t,h,e,m,p,s,sum;
	float per;
	printf("enter the marks:\n");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&p,&s);
	sum=t+h+e+m+p+s;
	per=(sum*100)/600;
	printf("Total per:%f\n",per);
	if(per>=80)
	{
		printf("Honours\n");
	}
	else if(per>=60)
	{
		printf("first division");
	}
	else if(per>=50)
	{
		printf("second div\n");
	}
	else if(per>=40)
	{
		printf("Third div\n");
	}
	else
	{
		printf("fail\n");
	}
}
