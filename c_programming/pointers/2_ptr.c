
#include<stdio.h>

int main()
{
//	unsigned int a=0xffffabcd;
	unsigned int a=0xff00a057;
	char *p=(char *)&a;
	printf("%x\n",*p);
	p++;
	printf("%x\n",*p);
}
