#include"myheader.h"
int NoOfDaysinMonth(int m,int y)
{
	int d;
	switch(y>0)
	{
		case 0:  return 0;
		case 1:if((m<=12&&m>=1)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
		       {
			       d=31;
			       return d;
		       }
		       else if((m<=12&&m>=1)&&(m==4||m==6||m==9||m==11))
		       {
			       d=30;
			       return d;
		       }
		       else if((m<=12&&m>=1)&&(m==2))
		       {
			       d=IsLeapYear(y);
			       if(d)
			       {
				       return d;
			       }
		       }
		       else
			       return 0;
	}
	return 0;
}

int IsLeapYear(int y)
{
	if((y%100!=0&&y%4==0)||(y%400==0))
	{
		return 29;
	}
	else
		return 28;
}
