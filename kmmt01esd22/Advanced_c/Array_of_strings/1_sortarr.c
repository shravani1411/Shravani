/*1) Declare a 2 dimenstional character array. Initialise it with strings. Sort the array in ascending order of strings and print it  back.*/

#include<stdio.h>
#include<string.h>
#define R 7
#define C 15
void str_cpy(char d[],char s[]);
int str_cmp(char str1[],char str2[]);
int main()
{
	char weeks[R][C]={"Sunday","Monday","Tuesday","wednesday","Thursday","Friday","Saturday"};
	int i,j,r;
	char temp[50];
	printf("before sorting:\n");
	for(i=0;i<R;i++)
	{
		printf("%s",weeks[i]);
		printf("\n");
	}

	for(i=0;i<R;i++)
		for(j=i+1;j<R;j++)
		{
			r=str_cmp(weeks[i],weeks[j]);
			if(r>0)
			{
				str_cpy(temp,weeks[i]);
				str_cpy(weeks[i],weeks[j]);
				str_cpy(weeks[j],temp);
			}
		}

	printf("\n");
	printf("after sorting:\n");
	for(i=0;i<R;i++)
	{
		printf("%s",weeks[i]);
		printf("\n");
	}
	return 0;
}

int str_cmp(char str1[],char str2[])
{
	int i;
	for(i=0;str1[i]==str2[i];i++)
	{
		if(str1[i]==0)
			return 0;
	}
	return (str1[i]-str2[i]);
}

void str_cpy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
		d[i]=s[i];
	d[i]='\0';
}
