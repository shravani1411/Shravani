/*Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.*/

#include<stdio.h>
int main()
{
	int x=10,*p1=&x,*p2=&x,*p3=&x;
	printf("*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
	x=20;
	printf("Direct change using x:*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
	*p1=2;
	printf("Indirect change using *p1:*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
	*p2=9;
	printf("Indirect change using *p2:*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
	*p3=0;
	printf("Indirect change using *p3:*p1=%d,*p2=%d,*p3=%d\n",*p1,*p2,*p3);
}

