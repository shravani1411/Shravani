#include<string.h>
#include<stdio.h>

int substr(char s[],char sub[])
{
	int i,j,d;
	for(i=0;s[i]!=0;i++)
	{
		d=i;
		for(j=0;s[d]!=0;j++,d++)
		{
			if(s[d]!=sub[j])
				break;
		}
		if(sub[j]==0)
			return i;
	}
	return -1;
}


int main()
{
	char s[100];
	char sub[100];
	int c,a;
	printf("enter first string\n");
	scanf("%99[^\n]s",s);
	printf("enter string\n");
	scanf(" %99[^\n]s",sub);
	c=substr(s,sub);
	printf("%d\n",c);
}

