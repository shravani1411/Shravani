/*6) "Write a function that takes a main string and two sub strings (need not be same length), and replace every occurrence of first substring with the second substring in main string and return a new string as output.

	eg., input : kernel  e   xxx

	output: kxxxrnxxxl"*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *newstring(char str[],char sub1[],char sub2[],char str2[]);
int main()
{
	char str1[20],sub1[20],sub2[20],str2[20];
	printf("enter a string:");
	scanf("%19[^\n]s",str1);
	printf("enter a substring in a string:");
	scanf(" %19[^\n]s",sub1);
	printf("enter a second substring:");
	scanf(" %19[^\n]s",sub2);
	printf("new str is:%s\n",newstring(str1,sub1,sub2,str2));
	return 0;
}

char *newstring(char str1[],char sub1[],char sub2[],char str2[])
{
	int i,j,k,l;
	for(i=0;str1[i]!=0;i++)
	{
		if(sub1[j]==str1[i])
		{
			for(k=0;sub2[k]!=0;l++,k++)
				str2[l]=sub2[k];
		}
		else
		{
			str2[l]=str1[i];
			l++;
		}
		k=0;
	}
	str2[l]=0;
	return str2;
}

