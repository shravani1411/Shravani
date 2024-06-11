/*7) Create a student structure dynamically and read and print the data of the student. (student template same as used previously).*/

#include<stdio.h>
#include<stdlib.h>
struct student
{
int ID;
char name[20];
int marks[6];
char fname[20];
int d1,m1,y1;
float per;
};

void result(struct student *);
int main()
{
	struct student *s=(struct student *)malloc(sizeof(struct student));
	int sum=0,i;
	printf("Enter name,father name & DOB:\n");
	s->ID=1;
	scanf("%s %s %d-%d-%d",s->name,s->fname,&s->d1,&s->m1,&s->y1);
	printf("Enter the marks\n");	
	for(i=0;i<6;i++)
	{
		printf("sub%d=",i+1);
		scanf("%d",&s->marks[i]);
		sum=sum+s->marks[i];
	}
	s->per=(sum*100)/600;
	result(s);
}

void result(struct student *s)
{
	printf("ID=%d\nname=%s\nfather name=%s\nDOB=%d-%d-%d\npercentage=%f\n",s->ID,s->name,s->fname,s->d1,s->m1,s->y1,s->per);
}
