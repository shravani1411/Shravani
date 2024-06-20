//7)Read 4 numbers and print which of them is biggest.


#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a,b,c,d values\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
/*	if(a>b)
	{
		if(a>c)
			if(a>d)
				printf("%d is bigger\n",a);
	}
	else if(b>c)
	{
			if(b>d)
				printf("%d is bigger\n",b);
	}
	else if(c>d)
	{
				printf("%d is bigger\n",c);
	}
	else
		printf("%d is bigger\n",d);*/

	if(a>b && a>c && a>d)
	{
	printf("%d is greater\n",a);
	}
	else if(b>c && b>d)
	{
	printf("%d is greater\n",b);
	}
	else if(c>d)
	{
	printf("%d is greater\n",c);
	}
	else
	printf("%d is greater\n",d);
}
