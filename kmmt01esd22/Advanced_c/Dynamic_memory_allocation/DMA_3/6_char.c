/*6) define a sizeof macro ,that will find the size of a given variable as parameter, using pointers. try to send a character array / character pointer / string constant as arguments and see what is the size returned, and understand the difference.*/

#include<stdio.h>
#define SIZE(a) (char *)(&a+1)-(char *)(&a) //printf("size of "#dt" is %lu\n",sizeof(a))
int main()
{
	int x;
	printf("Size of int: %lu\n",SIZE(x));
	char str[100];
	printf("Size of char array:%lu\n",SIZE(str));
	char *p;
	printf("Size of string constant:%lu\n",SIZE(p));
	char a='c';
	char *p2;
	p2=&a;
	printf("Size of character pointer:%lu\n",SIZE(p2));
}
