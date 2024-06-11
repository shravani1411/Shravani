/*4) Print a string in normal and then reverse, using recursion, without actually modifying the string.*/

#include<stdio.h>
void stringreverse(char *str);
int main()
{
	char str[100];
	printf("enter the string:");
	scanf("%s",str);
	stringreverse(str);
	printf("\n");
}

void stringreverse(char *str)
{
	if(*str)
	{
		stringreverse(str+1);
		printf("%c",*str);
	}
}



