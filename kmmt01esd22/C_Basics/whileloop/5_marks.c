/*Read the marks for 6 subjects for n students( number of students is input) , and find their percentage and print their grade according to below grading:
  80 - 100        : Honours
  60 - 79         : First Division
  50 - 59         : Second Division
  40 - 49         : Third Division
  0 - 39          : Fail*/

#include<stdio.h>
int main()
{
	int t,h,e,m,p,s,sum,i,n;
	float per;
	printf("number of students\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("enter the marks:\n");
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
		i++;
	}
}
