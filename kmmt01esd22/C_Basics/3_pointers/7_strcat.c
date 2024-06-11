/*7) char  * strcat(char d[], char s[]); // returns destination base address*/
#include<stdio.h>
//#include<string.h>
char *mystrcat(char d[],char s[]);
int main()
{
	char s[]="kernel";
	char d[15]="masters";
	mystrcat(d,s);
	printf("%s\n",d);
}
char *mystrcat(char d[],char s[])
{
char *m=d;
	while(*d!=0)
		d++;

	while(*s)
	{
		*d=*s;
		s++;
		d++;

	}
return d;

}
