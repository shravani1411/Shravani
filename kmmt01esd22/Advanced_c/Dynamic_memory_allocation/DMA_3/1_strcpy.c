/*1) implement your own string copy function.

  try calling the string copy function by sending the below as input:
  1) string constant as destination and string variable as source
  2) string variable as destination and string constant as source
  3) string variable as destination and string variable as source
  4) string constant as destination and string constant as source*/

/*
#include<stdlib.h>
#include<string.h>
void mystrcpy(char d[],char s[]);
int main()
{
	char s[100];
	printf("Enter the string variable:\n");
	scanf("%s",s);
	char *p;
	printf("Enter the string constant:\n");
	scanf("%s",p);
	mystrcpy(p,s);
	printf("%s",p);
}

void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
	d[i]=s[i];
}*/


//2) string variable as destination and string constant as source

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcpy(char d[],char s[]);
int main()
{
	char d[100];
	printf("Enter the string variable:\n");
	scanf("%s",d);
	char *p;
	printf("Enter the string constant:\n");
	scanf("%s",p);
//	char d[100];
//	printf("Enter the string variable:\n");
//	scanf("%s",d);
	mystrcpy(d,p);
	printf("%s",d);
}

void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
	d[i]=s[i];
}


//3) string variable as destination and string variable as source

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcpy(char d[],char s[]);
int main()
{
	char s[100];
	printf("Enter the string variable:\n");
	scanf("%s",s);
	char d[100];
	printf("Enter the string variable:\n");
	scanf("%s",d);
	mystrcpy(d,s);
	printf("%s\n",d);
}

void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
	d[i]=s[i];
}*/


//4) string constant as destination and string constant as source*/

/*#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mystrcpy(char d[],char s[]);
int main()
{
	char *p1;
	printf("Enter the string constant:\n");
	scanf("%s",p1);
	char *p2;
	printf("Enter the string constant:\n");
	scanf("%s",p2);
	mystrcpy(p2,p1);
	printf("%s\n",p2);
}

void mystrcpy(char d[],char s[])
{
	int i=0;
	while(s[i]!=0)
	{
		d[i]=s[i];
		i++;
	}
	d[i]=s[i];
}*/
