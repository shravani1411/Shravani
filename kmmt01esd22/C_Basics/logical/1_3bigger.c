/*Read 3 numbers and print which of them is the biggest.*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b &c value:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	{
		printf("%d is bigger\n",a);
	}
	else if(b>c)
	{
		printf("%d is bigger\n",b);
	}
	else
		printf("%d is bigger\n",c);
}

