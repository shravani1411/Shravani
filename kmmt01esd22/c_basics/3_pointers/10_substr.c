//0) char * strstr(char str[], char sub[]); //returns the address of character in main string from where substring is matching.

#include<stdio.h>
char*search(char *s,char *p);
int i=0;
int main()
{
	char *c;
	char s[100];
	char p[100];
	printf("enter main string\n");
	scanf("%99[^\n]s",s);
	printf("enter sub string\n");
	scanf(" %99[^\n]s",p);
	c=search(s,p);
	printf("%d position\nadress::%p\n",i,c);
}

char*search(char *s,char *p)
{
	int j=0,d;
	char *r;
	for(;*s!=0;s++,i++)
	{
		r=s;
		for(  ;*p!=0;r++,p++)
		{
			if(*p!=*r)
				break;
		}
		if(*p==0)
			return s;
	}
	return 0;
}

