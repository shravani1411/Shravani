/*Write a function to accept a date and return 1 if the date is valid, 0 if it is not valid.*/

#include<stdio.h>
int fun_isdate(int d, int m, int y)
{
	switch(0<=y)
	{
		case 0: return 0;
			break;
		case 1: if((m>=1&&m<=12)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
			{
				if((0<d)&&(d<32))
					return 1;
				else
					return 0;
			}
			else if((m>=1&&m<=12)&&(m==4||m==6||m==9||m==11))
			{
				if(0<d&&d<31)
					return 1;
				else
					return 0;
			}
			else if((m>=1&&m<=12)&&m==2)
			{
				if((y%4==0)&&(y%400==0)&&(y%100==0))
				{
					if((0<d)&&(d<=29))
						return 1;
					else
						return 0;
				}
				else
				{
					if((0<d)&&(d<=28))
						return 1;
					else
						return 0;
				}
			}
			else
				return 0;
	}
}

int main()
{
	int d,m,y ;
	printf("enter date in the format dd-mm-yyyy :\n");
	scanf("%d-%d-%d",&d,&m,&y);
	if(fun_isdate(d,m,y))
		printf("given date is valid \n");
	else
		printf("given date is invaild \n");
}
