
#include<stdio.h>

int main()
{
	unsigned int a=320;
	char *ptr=(char *)&a;
	printf("%d\n",*ptr);
	char x=127;
	printf("%d\n",x);
}
