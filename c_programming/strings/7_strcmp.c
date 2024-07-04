
#include<stdio.h>

int strcmp(char s1[],char s2[])
{
	int i,j;
	for(i=0,j=0;s1[i]!=0&&s2[j]!=0;i++,j++)
	{
		if(s1[i]>s2[j])
			return 1;
		else if(s1[i]<s2[j])
			return -1;
	}
		if(s1[i]==0&&s2[j]==0)
			return 0;
		if(s1[i]==0&&s2[j]!=0)
			return -1;
		if(s1[i]!=0&&s2[j]==0)
			return 1;
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



