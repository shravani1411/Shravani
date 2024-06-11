/*7) read a set of numbers from the user, and convert each integer to string using itoa function that you have written yesterday, and print the numeric string in calling function in the same loop.*/

#include<stdio.h>
char * itoa();
int main()
{
	int i,n,x;	
	printf("Enter n value:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number:\n");
		scanf("%d",&x);
		char *str=itoa(x);
		printf("%s\n",str);
	}
}

char * itoa(int i)
{
	static char str1[10];
	int rev=0,rem;
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

