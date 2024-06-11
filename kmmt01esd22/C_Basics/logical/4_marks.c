/*Find the % of marks for 6 subjects (read 6 subject marks and calculate percentage), for a student, and print the grade of the student as per below division , using if else statement and typecasting operator to get perfect floating point percentage.

  80 - 100        : Honours

  60 - 79         : First Division

  50 - 59         : Second Division

  40 - 49         : Third Division

  0 - 39          : Fail*/

#include<stdio.h>
int main()
{
	int t,h,e,m,p,s,sum;
	float per;
	printf("enter the marks\n");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&p,&s);
	sum=t+h+e+m+p+s;
	per=(float)(sum*100)/600;
	printf("total per:%f\n",per);
	if(per>=80&&per<=100)
	{
		printf("Honours\n");
	}
	else if(per>=60&&per<=79)
	{
		printf("first division\n");
	}
	else if(per>=50&&per<=59)
	{
		printf("second division\n");
	}
	else if(per>=40&&per<=49)
	{
		printf("third division\n");
	}
	else
	{
		printf("fail\n");
	}
}
