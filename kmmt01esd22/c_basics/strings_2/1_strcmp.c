#include<stdio.h>
#include<string.h>
int mystrcmp(char s1[],char s2[])
{
	int i,j;
	for(i=0,j=0;s1[i]!=0&&s2[j]!=0;i++,j++)
	{
		if(s1[i]<s2[j])
			return -1;
		else if(s1[i]>s2[j])
			return 1;
	}
	if(s1[i]==0&&s2[j]==0)
		return 0;
	if(s1[i]==0&&s2[j]!=0)
		return -1;
	if(s2[j]==0&&s1[j]!=0)
		return 1;
}

int main()
{
	int x,n1,n2;
	printf("enter the size:\n");
	scanf("%d%d",&n1,&n2);
	char s1[n1],s2[n2];
	printf("enter the string characters:\n");
	getchar();
	scanf("%s%s",s1,s2);
	x=mystrcmp(s1,s2);
	printf("%d\n",x);
}
