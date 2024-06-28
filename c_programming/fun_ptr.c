
#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

int main()
{
	int x=10,y=12;
	int (*p)(int,int);
	p=&add;
	printf("%d\n",(*p)(x,y));

}

