/*10) Create a two dementional integer array to store the marks of n students in a class (Each student takes different number of subjects) so the number rows and columns are dynamic here. Read the marks of every student and calculate average marks, and print who is the topper (with highest average marks).*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **p;
	int s,n,j,i,topper,d,avg;
	printf("enter the number of stduents:\n");
	scanf("%d",&n);
	p=(int**)calloc(n,sizeof(int*));
	for(i=0;i<n;i++)
	{
		printf("enter the number of subjects for student %d:\n",i+1);
		scanf("%d",&s);
		p[i]=(int*)malloc(s*sizeof(int));
		int sum=0;
		printf("enter person %d marks\n",i+1);
		for(j=0;j<s;j++)
		{
			scanf("%d",&p[i][j]);
			sum=sum+p[i][j];
		}
		avg=sum/s;
		if(i==0)
		{
			topper=avg;
			d=i;
		}
		else if(avg>topper)
		{
			topper=avg;
			d=i;
		}
	}
	printf("person %d is topper with avg of %d\n",d+1,topper);
}
