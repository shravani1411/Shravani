/*Read a date from the user*/

#include<stdio.h>
int main()
{
	int d,m,y,a,b;
	printf("enter day-month-year\n");
	scanf("%d-%d-%d",&d,&m,&y);
	a=(y>=1900&&y<=2200&&m>=1&&m<=12);
	switch(a)
	{
		case 0:
			printf("invalid input\n");
			break;
		case 1:
			if(m==1)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==2)
			{
				if(d>=1&&d<=29)
				{

					if(y%4)
						printf("invalid\n");
					else
						printf("invalid\n");
				}
			}
			else if(m==3)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==4)
			{
				if(d>=1&&d<=30)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==5)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==6)
			{
				if(d>=1&&d<=30)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==7)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==8)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==9)
			{
				if(d>=1&&d<=30)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==10)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==11)
			{
				if(d>=1&&d<=30)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			else if(m==12)
			{
				if(d>=1&&d<=31)
					printf("valid\n");
				else
					printf("invalid\n");
			}
			break;
		default : printf("enter valid input\n");
	}
}
