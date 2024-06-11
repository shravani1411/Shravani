/*6) Write a program to read a set of strings from a user and print which string is the smallest of all ( in string comparison, smallest string means that should come the first in dictionary sorting order). Create the strings dynamically.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,n;
	char *str1=(char *)malloc(50);
	printf("Enter a number:\n");
	scanf("%d",&n);
	printf("Enter the string 1:\n");
	scanf("%s",str1);
	for(i=1;i<n;i++)
	{
		char *str2=(char *)malloc(50);
		printf("Enter the string %d\n",i+1);
		scanf("%s",str2);
		int x=strcmp(str1,str2);
		if(x>0)
		{
			str1=str2;
		}
	}
			printf("The smallest string of all:%s\n",str1);
}

