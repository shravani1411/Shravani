/*6) Read some sentences as input and print the longest sentence of all as output.*/

#include<stdio.h>
int largest(char []);
int main()
{
	int r,c,j,i,l,large;
	printf("Enter number of strings and size of each string:\n");
	scanf("%d%d",&r,&c);
	char str[r][c];
	for(i=0;i<r;i++)
	{
		printf("Enter string-%d:\n",i+1);
		getchar();
		scanf("%[^\n]s",str[i]);
		l=largest(str[i]);
		if(i==0)
		{
			large=l;
			j=i;
		}
		else
		{
			if(large<l){
				large=l;
				j=i;
			}
		}

	}
	printf("the largest string is :%s\n",str[j]);
}
int largest(char str[])
{
	int i;
	for(i=0;str[i]!=0;i++);
	return i-1;
}
