#include<stdio.h>
int main()
{
	int a;
	printf("enter a value:\n");
	scanf("%d",&a);
	a>0?printf("no. %d is +ve\n",a):a<0?printf("no. %d is -ve\n",a):printf("the no. is %d\n",a);
}
