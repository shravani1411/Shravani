/*8) char * strlwr(char s[]); // returns s base address*/
#include<stdio.h>
//#include<string.h>
char *mystrlwr(char s[]);
int main()
{
	char s[10]="keRNEL";
	mystrlwr(s);
	printf("%s\n",s);
}
char *mystrlwr(char s[])
{
	char *d=s;
	while(*s)
	{
		if((*s)>=65&&(*s)<=90)
		{
			(*s)=(*s)+32;
		}
		s++;

	}
return d;
}
