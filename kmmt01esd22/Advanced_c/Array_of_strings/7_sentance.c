/*7) Read some sentences as input and convert the first letter of each word of every sentence to capital letter and print them back.*/

#include<stdio.h>
void capital(char [],int );
int main()
{
	int r,c,j,i,l,large,k=0;
	printf("Enter number of strings and size of each string:\n");
	scanf("%d%d",&r,&c);
	char str[r][c];
	for(i=0;i<r;i++)
	{
		printf("Enter string-%d:\n",i+1);
		getchar();
		scanf("%[^\n]s",str[i]);
		capital(str[i],k);
		for(j=0;str[i][j]!=0;j++)
			if(str[i][j]==' ')
			{
				capital(str[i],j+1);
			}
		printf("%s\n",str[i]);
	}
}

void capital(char str[],int j)
{
	if(str[j]>=97&&str[j]<=122)
	{
		str[j]=str[j]-32;
	}
}
