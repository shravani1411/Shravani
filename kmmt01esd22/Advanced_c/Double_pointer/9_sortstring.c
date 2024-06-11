/*9) Create a two dimentional array (array of strings) using a double pointer and sort the strings alphabetically. Here number of strings, and each string size, both are decided during runtime.*/

#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
int str_len(char []);
int str_cmp(char [],char []);
void str_cpy(char [],char []);
int main()
{
	char **p=NULL;
	int i,j,x,r,n;
	char *temp;
	printf("enter num of strings:\n");
	scanf(" %d",&r);
	p=(char **)malloc(r*sizeof(char *));
	for(i=0;i<r;i++)
	{
		char str[100];
		printf("Enter string %d\n ",i+1);
		scanf(" %s",str);
		n=str_len(str);
		p[i]=(char *) malloc(n+1);
		str_cpy(p[i],str);
	}
	for(i=0;i<r;i++)
		for(j=i+1;j<r;j++)
		{
			x=str_cmp(p[i],p[j]);
			if(x>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	printf("after sorting:\n");
	for(i=0;i<r;i++)
	{
		printf("%s\n",p[i]);
	}
	for(i=0;i<r;i++)
	{
		free(p[i]);
	}
	free(p);
}

int str_cmp(char str1[],char str2[])
{
	int i,j;
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]==0)
			return 0;
	}
	return (str1[i]-str2[i]);
}

int str_len(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++);
	return i;
}

void str_cpy(char p[],char str[])
{
	int i,j;
	for(i=0;p[i]!=0;i++);
	for(j=0;str[j]!=0;j++,i++)
	{
		p[i]=str[j];
	}
	p[i]=0;
}
