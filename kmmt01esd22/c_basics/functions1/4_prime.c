/*write a function that can take an integer as input and return 1, if the number is prime number and 0 if it is not prime and print appropriate output message.

  return type is integer.
  IsPrime - returns int (0,1)"*/

#include<stdio.h>
int IsPrime(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			break;
		}
	}
	if(i==(n/2)+1)
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int i,n,x;
	scanf("%d",&n);
	x=IsPrime(n);
	if(x)
	{
		printf("prime\n");
	}
	else
		printf("Not prime\n");
}


