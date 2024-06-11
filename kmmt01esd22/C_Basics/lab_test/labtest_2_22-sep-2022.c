#include<stdio.h>
int main()
{
	int d1,d2,m1,m2,y1,y2,p1,p2;
	printf("enter first person DOB (dd/mm/yyy):\n");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("enter second person DOB (dd/mm/yyy):\n");
	scanf("%d%d%d",&d2,&m2,&y2);
	if(y1<y2&&y2<y1)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
	else
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
	if(m2>m1&&d2>d1)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
	else
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
	if(m2>m1&&d1>d2)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);              
	else
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);               
	if(m1>m2&&d2>d1)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);               
	else
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);               
	if(m1>m2&&d1>d2)
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
	else
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
	if(d2>d1){
		printf("Person born on %d-%d-%d is older\n",d1,m1,y1);
	}               
	else if(d1>d2)
	{
		printf("Person born on %d-%d-%d is older\n",d2,m2,y2);
	}
	else
	{
		printf("Both are same age");
	}
}
