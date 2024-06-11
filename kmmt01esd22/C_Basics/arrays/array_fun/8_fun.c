/*Write a program to print an integer in binary format.
  eg., input : 17
output :   10001 */

#include"8_binary.h"
void binary(int arr[],int n)
{
	int r,i=0;
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
