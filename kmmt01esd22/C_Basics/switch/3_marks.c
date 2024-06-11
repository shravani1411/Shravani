/*Extend the percentage marks program to print the grade of the student as per below division , using switch statement.

  80 - 100        : Honours

  60 - 79         : First Division

  50 - 59         : Second Division

  40 - 49         : Third Division

  0 - 39          : Fail*/


#include<stdio.h>
int main()
{
	int t,h,e,m,p,s,sum,per;
	printf("enter the marks\n");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&p,&s);
	sum=t+h+e+m+p+s;
	per=(sum*100)/600;
	printf("total per:%d\n",per);
	per=per/10;
	switch(per)
	{
		case 10:
		case 9:
		case 8:
			printf("Honours\n");
			break;
		case 7:
		case 6:
			printf("first division\n");
			break;
		case 5:
			printf("second division\n");
			break;
		case 4:
			printf("third division\n");
			break;
		case 3:
		case 2:
		case 1:
		case 0:      printf(" fail\n");
	}
}
