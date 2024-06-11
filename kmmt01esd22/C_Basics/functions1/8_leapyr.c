/*8)Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.*/

#include<stdio.h>
int LeapYear(int y)
{
	if(y%100 != 0 && y%4 == 0 || y%400 == 0)
		return 1;
	else
		return 0;
}

void main()
{
	int year;
	printf("Enter year to verify the leap year or not : \n");
	scanf("%d",&year);
	if(LeapYear(year))
		printf("%d is a Leap year \n",year);
	else
		printf("%d not a Leap year \n",year);
}
