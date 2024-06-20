/*Write a function that accepts a month and year as input, and returns the number of days of the month as output. Print the number of days in a given month and year.*/

#include<stdio.h>
int Isleap(int y)
{
	if(y%100&&y%4==0||y%400==0){
		return 1;
	}
	else
		return 0;
}

int days(int m, int y)
{
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 0:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			if(Isleap(y))
				return 29;
			else
				return 28;
			break;
	}
	return 0;
}

int main()
{
	int m,y,d;
	printf("enter month & year:");
	scanf("%d-%d",&m,&y);
	d=days(m,y);
	printf("%d days\n",d);
}
