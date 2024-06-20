/*Read 4 numbers and print which of them is biggest.*/

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b,c&d values:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a>b&&a>c)
	{
		printf("%d is bigger\n",a);
	}
	else if(b>c&&b>d)
	{
		printf("%d is bigger\n",b);
	}
	else if(c>d)
	{
		if(d>a)
			printf("%d is bigger\n",c);
	}
	else
	{
		printf("%d is bigger\n",d);
	}
}


