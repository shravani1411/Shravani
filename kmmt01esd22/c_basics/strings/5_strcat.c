
#include<stdio.h>
#include<string.h>
void mystrcat(char s[],char d[]);
int main()
{
	char s[100];
	printf("Enter the string variable:\n");
	scanf("%s",s);	
	char d[100];
	printf("Enter the string variable:\n");
	scanf("%s",d);	
	mystrcat(s,d);
	printf("%s\n",s);
}

void mystrcat(char s[],char d[])
{
	int i,j;
	for(i=0;s[i]!=0;i++);
	for(j=0;d[j]!=0;j++,i++){
		s[i]=d[j];
	}
}

