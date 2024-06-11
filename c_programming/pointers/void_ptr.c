
#include<stdio.h>

int main()
{
	float f=123.34;
	int i=100;
	char ch='q';
	void *p=&f;
	printf("%f\n",*(float *)p);
	p=&i;
	printf("%d\n",*(int *)p);
	p=&ch;
	printf("%c\n",*(char *)p);
}

