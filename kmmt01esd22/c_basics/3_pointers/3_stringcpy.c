/*3) char * strcpy( char d[] , char s[]);  // returns destination base address*/
#include<stdio.h>
char *strcpy(char d[],char s[]);
int main()
{
	int n;
//	printf("Enter size:\n");
//	scanf("%d",&n);
	char s[100];
	char d[100];
	printf("Enter the elements:\n");
	scanf("%s",s);
	strcpy(d,s);
	printf("%p %p\nd=%s",d,s,d);

}
char *strcpy(char d[],char s[])
{
	char *p=d;	
	while(*s)
	{
		*d=*s;
		d++;
		s++;
	}
	*d='\0';
	return p;
}
