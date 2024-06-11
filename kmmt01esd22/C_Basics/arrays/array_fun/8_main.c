/*Write a program to print an integer in binary format.
  eg., input : 17
output :   10001 */

#include"8_binary.h"
int main()
{
	int arr[50],n;
	printf("Enter a number to convert it into binary:\n");
	scanf("%d",&n);
	binary(arr,n);
}
