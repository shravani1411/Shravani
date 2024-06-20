/*Write a program to print an integer in binary format.
  eg., input : 17
output :   10001 */

#include<stdio.h>
int main()
{
	int arr[50],n,r,i=0;
	printf("Enter a number to convert it into binary:\n");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		arr[i]=r;
		i++;
	}
for(int j=i-1;j>=0;j--)
{
printf("%d",arr[j]);
}
printf("\n");
}
