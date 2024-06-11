/*WAP to print if a year is leap year or not. Modify the date validation program using this.*/

#include<stdio.h>
#define LEAP(y) ((y%4==0)&&(y%400==0)&&(y%100==0))
int main()
{
	int y,m,d;
	printf("Enter the date of birth:\n");
	scanf("%d-%d-%d",&d,&m,&y);
	if(LEAP(y))
		printf("Leap year\n");
	else 
		printf("Not leap year\n");
	switch(y>0)
	{
		case 0: printf("Invalid Date\n");
			break;
		case 1: if((m>=1&&m<=12)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12))
			{
				if((0<d)&&(d<32))
					printf("Valid Date\n");
				else
					printf("Invalid Date\n");
			}
			else if((m>=1&&m<=12)&&(m==4||m==6||m==9||m==11))
			{
				if(0<d&&d<31)
					printf("Valid Date\n");
				else
					printf("Invalid Date\n");
			}
			else if((m>=1&&m<=12)&&m==2)
			{
				if(LEAP(y))
				{
					if((0<d)&&(d<=29))
						printf("Valid Date\n");
					else
						printf("Invalid Date\n");
				}
				else
				{
					if((0<d)&&(d<=28))
						printf("Valid Date\n");
					else
						printf("Invalid Date\n");
				}
			}
			else
				printf("Invalid Date\n");
	}
}

