//4) Write a macro to find size of a given data typeusing pointers 

#include<stdio.h>
#define sizeof(dt)  size##of(dt)
int main()
{
	printf("size of short:%ld\n",sizeof(short*));
	printf("size of int:%ld\n",sizeof(int*));
	printf("size of float:%ld\n",sizeof(float*));
	printf("size of double:%ld\n",sizeof(double*));
	printf("size of long double:%ld\n",sizeof(long double*));
	printf("size of character:%ld\n",sizeof(char*));
	return 0;
}
