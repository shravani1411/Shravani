/*Write a function ,that can take two integers, swap their values and print their new values in function itself. function return type should be void.*/

#include<stdio.h>
int swap(int a, int b)
{
	a=a+b;
	a=a-b;
	b=a-b;
}

int main()
{
	int a=10,b=20;
	printf("before swap:a=%d b=%d\n",a,b);
	swap(a,b);
	printf("after swap:b=%d a=%d\n",a,b);
}
