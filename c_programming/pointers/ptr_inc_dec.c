
#include<stdio.h>

int main()
{
	int a=5;
	int *p=&a;
	printf("%d\n",*p);
	printf("%p\n",p);
	printf("%p\n",++p);
	printf("%p\n",p++);
	printf("%p\n",p);
	printf("%p\n",--p);
	printf("%p\n",p--);
	printf("%p\n",p);
}
