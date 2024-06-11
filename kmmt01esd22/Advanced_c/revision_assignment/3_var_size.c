//3) Write a macro to find size of a variable using pointers 

#include<stdio.h>
#define MYSIZEOF(x) (char*)(&x + 1) - (char*)(&x)
int main()
{
	short *x1=0;
	int *x2=0;
	float *x3=0;
	double *x4=0;
	long double *x5=0;
	char *x6=0;
	printf("size of short:%ld\n",MYSIZEOF(*x1));
	printf("size of int:%ld\n",MYSIZEOF(*x2));
	printf("size of float:%ld\n",MYSIZEOF(*x3));
	printf("size of double:%ld\n",MYSIZEOF(*x4));
	printf("size of long double:%ld\n",MYSIZEOF(*x5));
	printf("size of character:%ld\n",MYSIZEOF(*x6));
	return 0;
}
