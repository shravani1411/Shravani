/*5)define a macro that generates a function that returns the sum of array elements, for different data typed arrays.*/

#include<stdio.h>
#define gena(dt,fn,s) dt fn(dt a[])\
{\
	int i;\
	dt S=0;\
	printf("enter array of 10 size\n");\
	for(i=0;i<10;i++){\
		scanf(#s,&a[i]);\
			S=S+a[i];}\
		printf(#s" ",S);\
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

