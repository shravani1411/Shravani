//5. Search for an element in a two dimentional array, and print its position - as row and column numbers

#include<stdio.h>
int main()
{
	int m, n,a, count=0, array[10][10];
	printf("Enter the number of rows and columns:\n\n");
	scanf("%d %d", &m, &n);
	printf("Enter elements:\n");
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	printf("Enter the position to find: ");
	scanf("%d", &a);
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			if(array[i][j] ==a ){
				printf("position at [%d, %d] \n", i, j);
				count++;
			}
		}
	}
	if(count==0)
		printf("position Not found");
	return 0;
}

