/*6. Declare a two dimensional array of characters, read names from the user and print them back with each individual character format (%c) in a loop.*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,r,c;
	printf("Enter r & c values:\n");
	scanf("%d%d",&r,&c);
	char name[r][c];
	printf("Enter names:\n");
	for(i=0;i<r;i++)
	{
			scanf("%s",name[i]);
	}
	for(i=0;i<r;i++)
	{
		for(j=0;name[i][j]!=0&&j<c;j++)
		{
			printf("%c\t",name[i][j]);
		}
		printf("\n");	
	}
}

