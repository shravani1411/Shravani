/*declare different pointers with different data types. Print the sizes of the pointer variables using sizeof operator. Why do u think all of them are giving same size irrespective of the data type?*/

#include<stdio.h>
int main()
{
	int a=15,*pi;
	float b=3.14,*pf;
	char c='&',*pc;
//	printf("%lu %lu %lu\n",sizeof(*p1),sizeof(*p2),sizeof(*p3));
	pi=&a;
	pf=&b;
	pc=&c;
	printf("size of int variable:%lu\nsize of float variable:%lu\nsize of char variable:%lu\n",sizeof(pi),sizeof(pf),sizeof(pc));
}

/*I think all of them are giving same size irrespective of the data type, because the pointer variable always be an integer so it always stores the address of variable, where the address is always integer.*/
