/*4) Read a set of words from the user and concatenate all of them to make a sentence and print it back using the concatenation function above with spaces as delimiters and fullstop as end of the sentence.

input: 
Kernel
Masters
is
India's
leading
training
institute.

output: Kernel Masters is India's leading training institute.*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *mystrcat(char str1[],char p[]);
int main()
{
	int n,i=0,j=0;
	char *s;
	n=1;
	char *str1=(char *)malloc(10);
	char *p=(char *)malloc(100);
	printf("Enter dest string:\n");
	scanf("%s",p);
	while(n)
	{
		printf("Enter string-%d:",j++);
		scanf("%s",str1);
		if(p!=NULL){
			s=mystrcat(str1,p);
			for(i=0 ;str1[i]!='\0' ;i++)
				if(str1[i]=='.')
				{
					n=0;
				}
			printf("%s\n",s);
			p=s;
		}
	}
	free(p);
	free(str1);
}

char *mystrcat(char str1[],char p[])
{
	int i,j,l1=0,l2=0,l=0;
	for(i=0;str1[i]!=0;i++)
		l1++;
	for(i=0;p[i]!=0;i++)
		l2++;
	*(p+l2)=32;
	l2++;
	l = l1 +l2 + 2;
	char *p1=(char *)realloc(p,l);
	for(i=0;str1[i]!='\0';i++,l2++)
	{
		p1[l2]=str1[i];
	}
	p1[l2]='\0';
	return p1;
}
