/*Return a structure with addition, subtraction, multiplication, quotient and reminder of 2 integers, sent to a function as arguments. Quotient should be a floating point result. All the results to be printed in main function.*/

#include"5_header.h"
struct calc op(int x,int y);
int main()
{
	struct calc z;
	int x,y;
	printf("enter 2 values:\n");
	scanf("%d%d",&x,&y);
	z=op(x,y);
	printf("addition=%d\nsubtraction=%d\nmultiplication=%d\nremainder=%d\nquoient=%f\n",z.a,z.s,z.m,z.r,z.q);
}

struct calc op(int x,int y)
{
	struct calc z;
	z.a=x+y;
	z.s=x-y;
	z.m=x*y;
	z.q=x/y;
	z.r=x%y;
	return z;
}
