/*WAP to print if  a character is alphanumeric , using macros.*/

#include<stdio.h>
#define ALPHANUMERIC(c) (c>=65&&c<=90||c>=97&&c<=122)||(c>=48&&c<=57)
int main()
{
	char c;
	printf("enter a character:\n");
	scanf("%c",&c);
	if(ALPHANUMERIC(c))
		printf("%c is an alphanumeric\n",c);
	else
		printf("%c is not an alphanumeric\n",c);
} 
