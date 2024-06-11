/*Return a structure with area and perimeter of a circle from a function that takes radius as input. Print area and perimeter in main function.*/

#include"4_header.h"
struct ap areaperi(int r);
int main()
{
	struct ap op;
	int r;
	printf("enter the radius:\n");
	scanf("%d",&r);
	op=areaperi(r);
	printf("area=%f\nperimeter=%f\n",op.a,op.p);
}

struct ap areaperi(int r)
{
	struct ap op;
	op.a=22*r*r/7.0;
	op.p=2*22*r/7.0;
	return op;
}
