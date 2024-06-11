/* char * strrev( char s[]); // returns string base address*/
#include<stdio.h>
char * reverse (char s[]);
int main()
{
	char *p;
	char s[100];
	printf("enter source srting\n");
	scanf("%99[^\n]s",s);
	printf("brfore::%p\n",s);
	p=reverse(s);
	printf("%s\n",s);
	printf("after::%p\n",p);
}
char * reverse(char *s)
{
	int i,c,j;
	char *r;
	r=s;
	for(i=0;*(s+i)!=0;i++);
	i=i-1;
	for(j=0;j<i;j++,i--)
	{
		c=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=c;
	}
	return r;
}


