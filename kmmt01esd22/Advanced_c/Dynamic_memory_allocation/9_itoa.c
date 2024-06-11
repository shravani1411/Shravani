/*9) Implement your own itoa function and return the string from the function. Print the result in main.
  eg., if input is 345 (integer) output should be a string "345" 
  itoa function is a library function that converts a number to a numeric string.*/

#include<stdio.h>
char * itoa(int i);
int main()
{
	int i;
	printf("enter the number \n");
	scanf("%d",&i);
	char *str=itoa(i);
	printf("%s\n",str);
}

char * itoa(int i)
{
	static char str1[10];
	int rev =0,rem;
	while(i>0)
	{
		rem =i%10;
		i=i/10;
		rev=rev*10+rem;
	}
	for(i=0;rev>0;i++)
	{
		rem=rev%10;
		rev=rev/10;
		str1[i]=rem+48;
	}
	str1[i]=0;
	return str1;
}
