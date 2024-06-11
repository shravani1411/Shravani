/*Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.*/

#include<stdio.h>
int main()
{
	int a,b,c,*p;
	printf("enter integer values:\n");
	scanf("%d%d%d",&a,&b,&c);
	*p=a;
	printf("value of variable a:%d\n",*p);
	*p=b;
	printf("value of variable b:%d\n",*p);
	*p=c;
	printf("value of variable c:%d\n",*p);
}
