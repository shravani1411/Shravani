/*4. Write a program  for matrix multiplication.*/

#include <stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,j,k;
	printf("Enter the elements of first matrix:\n");
	for(i= 0;i<2;i++)
	{
		for(j=0;j<2;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enetr the elements of second matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("The element of first matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The element of second matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		}
	}
	printf("Multiplication of two matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++){
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}
