#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter a,b,c,d & e values:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=a>b?(a>c?a:c):b>c?(b>d?b:d):(c>d?c:d);(d>a?d:a);
	printf("bigger no. is %d\n",e);
}
