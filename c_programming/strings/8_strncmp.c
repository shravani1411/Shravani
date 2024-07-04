
#include<stdio.h>

int strcmp(char s1[],char s2[])
{
	int i,j,n;
	printf("enter a number to compare:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if(s1[i]>s2[i])
			return 1;
		else if(s1[i]<s2[i])
			return -1;
	}
	if(n==i)
		return 0;
}

int main()
{
	char s1[100],s2[100];
	int x;
	printf("enter string 1:");
	scanf("%99[^\n]s",s1);
	printf("enter string 2:");
	getchar();
	scanf("%99[^\n]s",s2);
	x=strcmp(s1,s2);
	printf("%d\n",x);
}



