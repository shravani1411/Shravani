/*3) Write a string concatenation function that calculates the source string length, accordingly adjusts the size of destination string before concatenating the strings, to avoid size issues. For this the destination must be allocated dynamically in calling function.*/

#include<stdio.h>
#include<stdlib.h>
char mystrcat(char str1[],char p[]);
int main()
{
	char str1[100];
	printf("enter first string\n");
	scanf("%s",str1);
	char*p=(char*)malloc(sizeof(char));
	printf("enter second string\n");
	getchar();
	scanf("%s",p);
	mystrcat(str1,p);
	printf("%s\n",p);
}
char mystrcat(char str1[],char p[])
{
	int l1=0,l2=0,l=0,i,j;
	for(i=0;str1[i]!=0;i++)
		l1++;
	printf("the length of the first  string %d\n",l1);
	for(j=0;p[j]!=0;j++)
		l2++;
	l=l1+l2+1;
	printf("the length of the second string %d\n",l2);
	p=(char*)realloc(p,l);
	for(i=0;i<l;i++,l2++)
	{
		p[l2]=str1[i];

	}
}
