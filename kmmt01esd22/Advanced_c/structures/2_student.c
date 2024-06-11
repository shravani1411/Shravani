/*Define a student template with below information.
  ID, name, marks of 6 subjects as an array, fathername, day ,month & year of birth, day,month&year of joining, percentage.
  Initialize a student variable with appropriate data and print all members. Write a function that takes the structure as argument , reads the data using scanf, calculates the percentage of marks for the student and update percentage member. write a print function to print the data*/

#include"2_student.h"
void result(struct student);
int main()
{
	struct student s1;
	int sum=0,i;
	printf("enter name,father name,DOB & joining date:\n");
	s1.ID=1;
	scanf("%s %s %d-%d-%d %d-%d-%d",s1.name,s1.fname,&s1.d1,&s1.m1,&s1.y1,&s1.d2,&s1.m2,&s1.y2);
	printf("enter the marks\n");	
	for(i=0;i<6;i++)
	{
		printf("sub%d=",i+1);
		scanf("%d",&s1.marks[i]);
		sum=sum+s1.marks[i];
	}
	s1.per=(sum*100)/600;
	result(s1);
}

void result(struct student s1)
{
	printf("ID=%d\nname=%s\nfather name=%s\nDOB=%d-%d-%d\njoining date=%d-%d-%d\npercentage=%f\n",s1.ID,s1.name,s1.fname,s1.d1,s1.m1,s1.y1,s1.d2,s1.m2,s1.y2,s1.per);
}
