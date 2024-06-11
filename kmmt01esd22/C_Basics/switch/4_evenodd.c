/*C program to check whether a number is odd or even using switch statement*/

#include<stdio.h>
int main()
{
	int x; 
	printf("enter x value:\n");
	scanf("%d",&x);
	switch(x%2==0)
	{
		case 0:
			printf("%d is odd\n",x);
			break;
		case 1:printf("%d is even\n",x);
	}
}
