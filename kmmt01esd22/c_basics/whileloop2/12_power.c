/*12. Write Power calculation using multiplication(*)  operator. Do not use library functions.*/

#include<stdio.h>
int main()
{
	int mul=1,n,b,i=1;
	printf("Enter a,b values:\n");
	scanf("%d%d",&n,&b);
	while(i<=b)
	{
		mul *=n;
		i++;
	}
	printf("%d\n",mul);
}
