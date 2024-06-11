/*3) Implement your own string concatenation function.

try calling the string copy function by sending the below as input:
1) string constant as destination and string variable as source
2) string variable as destination and string constant as source
3) string variable as destination and string variable as source
4) string constant as destination and string constant as source*/

/*#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
	char s[100];
	printf("Enter the string variable:\n");
	scanf("%s",s);	
	char *p;
	printf("Enter the string constant:\n");
	scanf("%s",p);	
	mystrcat(p,s);
	printf("%s\n",p);
}
void mystrcat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0;j++,i++){
		d[i]=s[j];
	}
}*/

//2) string variable as destination and string constant as source

/*#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
	char *p;
	printf("Enter the string constant:\n");
	scanf("%s",p);	
	char d[100];
	printf("Enter the string variable:\n");
	scanf("%s",d);	
	mystrcat(d,p);
	printf("%s\n",d);
}
void mystrcat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0;j++,i++){
		d[i]=s[j];
	}
}*/

//3) string variable as destination and string variable as source

/*#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
	char s[100];
	printf("Enter the string variable:\n");
	scanf("%s",s);	
	char d[100];
	printf("Enter the string variable:\n");
	scanf("%s",d);	
	mystrcat(d,s);
	printf("%s\n",d);
}
void mystrcat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0;j++,i++){
		d[i]=s[j];
	}
}*/

//4) string constant as destination and string constant as source

#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
	char *s;
	printf("Enter the string constant:\n");
	scanf("%s",s);	
	char *d;
	printf("Enter the string constant:\n");
	scanf("%s",d);	
	mystrcat(d,s);
	printf("%s\n",d);
}
void mystrcat(char d[],char s[])
{
	int i,j;
	for(i=0;d[i]!=0;i++);
	for(j=0;s[j]!=0;j++,i++){
		d[i]=s[j];
	}
}



