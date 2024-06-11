/*Write a program to take input for two character variables using pointers and find out which character has higher ascii value.*/

#include<stdio.h>
int main()
{
	char c1,c2,*p1,*p2;
	printf("enter the characters:\n");
	scanf("%c %c",&c1,&c2);
	p1=&c1;
	p2=&c2;
	if(*p1>*p2)
		printf("character %c has higher ascii value\n",*p1);
	else
		printf("character %c has higher ascii value\n",*p2);
}


