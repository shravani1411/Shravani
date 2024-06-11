/*10) Write a function, that takes two strings as input and concatenates only the first n characters from first string and first m characters from second string and makes a new string.
  eg., input str1 = "kernel masters", str2 = "raayan systems", n = 3, m = 5
output : kerraaya*/

#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
void mystrncat(char str1[],char str2[],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++);
	for(j=0;j<m;j++)
	{
		str1[i++]=str2[j];
	}
	str1[i]=0;
}

int main()
{
	int n,m;	
	char str1[100];
	char str2[100];
	printf("Enter 2 strings:\n");
	scanf("%99[^\n]s",str1);
	getchar();
	scanf("%99[^\n]s",str2);
	printf("Enter n & m values:\n");
	scanf("%d%d",&n,&m);
	mystrncat(str1,str2,n,m);
	printf("%s\n",str1);
}
