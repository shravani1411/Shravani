/*Read a character and print if it is alphabet or not.*/

#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character:\n");
	scanf("%c", &ch);
	if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
		printf("is an alphabet\n");
	else
		printf("is not an alphabet\n");
}
