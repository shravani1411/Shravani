/*Write a function that can rotate the values of three variables. print the results in main function.*/

#include<stdio.h>
void rotate(int *,int *,int *);
int main()
{

	int x,y,z;
	printf("enter any three numbers:\n");
	scanf("%d%d%d",&x,&y,&z);
	printf("before swap:x=%d y=%d z=%d\n",x,y,z);
	rotate(&x,&y,&z);
	printf("after swap:x=%d y=%d z=%d\n",x,y,z);
}

void rotate(int *p1,int *p2,int *p3)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=*p3;
	*p3=temp;
}
