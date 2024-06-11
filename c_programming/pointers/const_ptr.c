
#include<stdio.h>

int main()
{
	int x=10,y=12;
	int *const p=&x;
	//p=&y;   xxx
	*p=11;
	printf("%d\t%d\n",x,*p);
}
