/*5. C program to check whether a number is odd or even using switch statement*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a & b values:\n");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 0:
			printf("%d is bigger:\n",b);
			break;
		case 1:
			printf("%d is bigger:\n",a);
	}
}
