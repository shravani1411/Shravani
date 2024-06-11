#include"myheader.h"
int CalculateNetSalary(int total,int lop,int m,int y)
{
	int d,s;
	d=NoOfDaysinMonth(m,y);
	{
		if(d)
		{
			if(lop<=d)
			{
				s=total-lop*total/d;
				return s;
			}
			else
				return 0;
		}
		return 0;
	}
}
