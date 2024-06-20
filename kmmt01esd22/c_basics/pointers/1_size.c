/*  Write a program to print the address of a variable , its value ,its size, try different executions and note the address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected value (apply * operator).*/

#include<stdio.h>
int main()
{
	int a=15,*p1;
	printf("address of variable:%p\nvalue of variable:%d\nsize of variable:%lu\n",&a,a,sizeof(a));
	p1=&a;
	printf("%p\nindirected value of variable:%d\nsize of variable:%lu\n",p1,*p1,sizeof(p1));
}
