/*8) Create an array of students dynamically and read and print the data of the students and find the topper. (student template same as used previously)*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
	int ID;
	char name[10];
	int arr[6];
	char fathername[19];
	int dob,m,y;
	int doj,m1,y1;
};

int main()
{
	int i=1,sum=0;
	float per=0;
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int j=1;
	struct student *s1=(struct student *)malloc(n*sizeof(struct student));
	printf("student %d details\n",j);
	printf("enter id:");
	scanf("%d",&s1->ID);
	printf("name:");
	scanf("%s",s1->name);
	printf("marks of 6 subjects:\n");
	for(i=0;i<6;i++)
	{
		scanf("%d",&s1->arr[i]);
	}
	printf("father name: dob-m-y: doj-m-y: per\n");
	scanf("%s%d-%d-%d%d-%d-%d",s1->fathername,&s1->dob,&s1->m,&s1->y,&s1->doj,&s1->m1,&s1->y1);
	printf("ID=%d\tname=%s\n",s1->ID,s1->name);
	for(i=0;i<6;i++)
		printf("marks:%d\n",s1->arr[i]);
	printf("father name=%s\tdob-m-y=%d-%d-%d\tdoj-m-y=%d-%d-%d\t",s1->fathername,s1->dob,s1->m,s1->y,s1->doj,s1->m1,s1->y1);
	for(i=0;i<6;i++)
		sum=sum+s1->arr[i];
	printf("sum=%d\n",sum);
	per=(sum*100)/600;
	int top=per;
	printf("per=%f\n",per);
	int m=1;
	j=2;
	while(j<=n)
	{
		printf("enter student %d details\n",j);
		printf("enter id:");
		scanf("%d",&s1->ID);
		printf("name:");
		scanf("%s",s1->name);
		printf("marks of 6 subjects:\n");
		for(i=0;i<6;i++)
		{
			scanf("%d",&s1->arr[i]);
		}
		printf("father name: dob-m-y: doj-m-y: per\n");
		scanf("%s%d-%d-%d%d-%d-%d",s1->fathername,&s1->dob,&s1->m,&s1->y,&s1->doj,&s1->m1,&s1->y1);
		printf("ID=%d\tname=%s\n",s1->ID,s1->name);
		for(i=0;i<6;i++)
			printf("marks:%d\n",s1->arr[i]);
		printf("father name=%s\tdob-m-y=%d-%d-%d\tdoj-m-y=%d-%d-%d\t",s1->fathername,s1->dob,s1->m,s1->y,s1->doj,s1->m1,s1->y1);
		sum=0,per=0;
		for(i=0;i<6;i++)
			sum=sum+s1->arr[i];
		printf("sum=%d\n",sum);
		per=sum*100/600;
		printf("per=%f\n",per);
		if(per>top)
		{
			
			(top=(top>=per))?top:per;
			m=j;
		}
		j++;
	}
	printf("student %d is topper\n",m);
}
