#include<stdio.h>
int cmp(char s1[],char s2[],int n);
int main()
{
	int n;
	char s1[100];
	char s2[100];
	int c;
	printf("enter first strng\n");
	scanf("%99[^\n]s",s1);
	printf("enter second strng\n");
	scanf(" %99[^\n]s",s2);
	printf("enter how many characters do you want to compare\n");
	scanf("%d",&n);
	c=cmp(s1,s2,n);
	printf("%d\n",c);
}
int cmp(char s1[],char s2[],int n)
{
	int i;
	for(i=0;(i<n);i++)
	{
		if(s1[i]<s2[i])
			return -1;
		if(s2[i]<s1[i])
			return 1;
	}
	if(i==n)
		return 0;
}

