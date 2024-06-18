//3) Read 3 numbers and print which of them is the biggest.


#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b & c values\n");
	scanf("%d%d%d",&a,&b,&c);
/*	if(a>b)
	{
		printf("%d is greater\n",a);
	}
	else if(b>c)
	{
		printf("%d is greater\n",b);
	}
	else if(c>a)
	{
		printf("%d is greater\n",c);
	}*/
	
	if(a>b && a>c)
	{
	printf("%d is greater\n",a);
	}
	else if(b>c)
	{
	printf("%d is greater\n",b);
	}
	else
		printf("%d is greater\n",c);
}
