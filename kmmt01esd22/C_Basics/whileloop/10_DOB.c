/*read the dates of birth of n students, print the date in a changed format and print a message when the date of birth belongs to a leap year.

  eg.,
  input number of students: 3

  input student1 date of birth: 2-3-2000
  date is: 2 March 2000
  this student is born in a leap year.

  input student2 date of birth: 12-7-2001
  date is: 12 July 2001

  input student3 date of birth: 12-12-2024
  date is: 12 December 2024 */

#include<stdio.h>
int main()
{
	int d,m,y,i,x;
	i=1;
	printf("Enter no.of Inputs:");
	scanf("%d",&x);
	while(i<=x)
	{
		printf("enter student%d DOB:\n",i); 
		scanf("%d%d%d",&d,&m,&y);
		if(m==1)
			printf("%d-january-%d\n",d,y);
		else if(m==2)
			printf("%d-feb-%d\n",d,y);
		else if(m==3)
			printf("%d-march-%d\n",d,y);
		else if(m==4)
			printf("%d-April-%d\n",d,y);
		else if(m==5)
			printf("%d-May-%d\n",d,y);
		else if(m==6)
			printf("%d-june-%d\n",d,y);
		else if(m==7)
			printf("%d-July-%d\n",d,y);
		else if(m==8)
			printf("%d-August-%d\n",d,y);
		else if(m==9)
			printf("%d-September-%d\n",d,y);
		else if(m==10)
			printf("%d-October-%d\n",d,y);
		else if(m==11)
			printf("%d-November-%d\n",d,y);
		else if(m==12)
			printf("%d-December-%d\n",d,y);
		if(y%4==0)
			printf("This student born in leap year\n");
		i++;
	}        
	return 0; 
}
