/*Read 3 numbers and print which of them is the biggest using conditional operator & logical operator.*/

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a,b & c values:\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b&&a>c)?printf("bigger no. is:%d\n",a):(b>c)?printf("bigger no. is:%d\n",b):printf("bigger no. is:%d\n",c);
}

