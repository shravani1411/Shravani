/*11) Write a function to replace a given substring by another string of same length in a given string, return the destination string base address.

  char * strreplacestr(char * str[], char *sub1[] , char *sub2[]);

  eg., input main string: Kernel Masters
  input substring: er
  input substring to replace: 12

output: K12nel Mast12s*/

#include<stdio.h>
#include<string.h>
char *replace(char *s,char *r,char *t);
void rep(char *s,char *t);
int main()
{
	int i,e,j,q,w,d;
	char s[100];
	char r[100];
	char t[100];
	char *c;
	printf("enter mainstring\n");
	scanf("%99[^\n]s",s);
	printf("enter sub string\n");
	scanf(" %99[^\n]s",r);
	printf("enter replace string\n");
	scanf(" %99[^\n]s",t);
	q=strlen(r);
	w=strlen(t);
	printf("q::%d w::%d\n",q,w);
	if(q==w)
	{
		c=replace(s,r,t);
		printf("%s\n",s);
		printf("%p\n",c);
	}
	else
		printf("enter substring and replacestring of samesize\n");
}

char* replace(char *s,char *r,char *t)
{
	char *d,*e,*c=s,*p=r;		
	for(;*s!=0;s++)
	{
		d=s;
		r = p;
		for(;*r!=0;r++,d++)
		{
			if(*d!=*r)
				break;
		}
		if(*r==0)
		{
			rep(s,t);

		}
	}
	return c;
}

void rep(char *s,char *t)
{
	for(;*t!=0;t++,s++)
	{
		*s=*t;
	}
}


