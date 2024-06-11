#include<stdio.h>
int y;
static int a;
static void fun1(void);
void fun(void);
int main()
{
	printf("hello\n");
	fun();
	fun1();
}

static void fun1(void)
{
	printf("fun()\n");
	a=20;
	printf("%d\n",a);
}
