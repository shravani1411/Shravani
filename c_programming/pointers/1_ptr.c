
#include<stdio.h>

int main()
{
	//int a=320;
	int a=130;
	char *p=(char *)&a;
	printf("%d\n",*p);
}
