#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b,c & d values:\n");
	scanf("%d%d%d",&a,&b,&c);
	d=a>b?(a>c?a:c):(b>c?b:c);
	printf("%d is bigger\n",d);
}
