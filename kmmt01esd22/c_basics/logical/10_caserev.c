/*input an alphabet. Output its case reverse.

  eg., input: a
output: A

input: U
output: u

input: 4
output: not an alphabet*/

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:\n");
	scanf("%c",&ch);
	(ch>=65 && ch<=90)?printf("Reverse character is:%c\n",ch+32):(ch>=97 && ch<=122)?printf("Reverse character is :%c\n",ch-32):printf("It is alphanumeric value\n");
}
