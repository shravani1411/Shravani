#include<stdio.h>
#include<string.h>
int stringicmp(char s1[],char s2[]);
int main()
{
	int n,c;
	printf("Enter n size:\n");
	scanf("%d",&n);
	char s1[n];
	char s2[n];
	printf("Enter string 1 size:\n");
	scanf("%s",s1);
	printf("Enter string 2 size:\n");
	scanf("%s",s2);
//	printf("%s",s2);
	c=stringicmp(s1,s2);
	printf("%d\n",c);
}
int stringicmp(char s1[],char s2[])
{
	int i,j;
	for(i=0,j=0;s1[i]!='\0'||s2[j]!='\0';i++,j++)
		{
				if(s1[i]>=65&&s1[i]<=90)
					s1[i]=s1[i]+32;

				if(s2[j]>=65&&s2[j]<=90)
					s2[j]=s2[j]+32;
				if(s1[i]<s2[j])
					return -1;
				else if(s1[i]>s2[i])
					return 1;
						
//				else if(s1[i]==s1[j])
//					return 0;

		}
	if(s1[i]==0&&s2[i]==0)
		return 0;
	if(s1[i]!=0&&s2[j]==0)
		return -1;
	if(s1[i]==0&&s2[j]!=0)
		return 1;
}

