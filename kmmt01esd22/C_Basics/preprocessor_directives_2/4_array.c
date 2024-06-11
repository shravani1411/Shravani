//4)define a macro to generate a generic function that takes prints an array in reverse order. Generate the functions for int, float, double data types.

#include<stdio.h>
#define gena(dt,fn,s) dt fn(dt a[])\
{\
	int i;\
	printf("enter array of 10 size\n");\
	for(i=0;i<10;i++){\
		scanf(#s,&a[i]);}\
	for(i=9;i>=0;i--){\
		printf(#s" ",a[i]);}\
	printf("\n");\
}

	gena(int,arrayi,%d)
	gena(float,arrayf,%f)
	gena(double,arrayd,%lf)
int main()
{
	int a[10];
	float b[10];
	double c[10];
	arrayi(a);
	arrayf(b);
	arrayd(c);
}

