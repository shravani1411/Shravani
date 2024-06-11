/*8) Implement  a macro to find the size of a datatype when the datatype keyword is provided as macro parameter.*/

#include<stdio.h>
#define  S(n,d,x)     printf(#n"::"#d"\n",sizeof(x));  
int main()
{
	int a=9;
	float b=6;
	double c=9;
	char e=a;
	S(integer,%lu,a);
	S(floats,%lu,b);
	S(doubles,%lu,c);
	S(character,%lu,e);
}


