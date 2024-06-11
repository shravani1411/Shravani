/*Read a set of n numbers (n is input) and print if each given number is smaller or bigger than the previous number. For first number there will not be any output as there is no previous number.
eg., input number of values: 5
enter 1st value: 6
enter 2nd value: 7
7 is bigger than 6
enter 3rd value: 5
5 is smaller than 7
enter 4th value: 18
18 is bigger than 5
enter 5th value: 6
6 is smaller than 18*/

#include<stdio.h>
int main()
{
	int i=1,n,b,a;
	printf("enter the number of values:");
	scanf("%d",&n);
	printf("enter the value %d:",i);
	scanf("%d",&a);
	b=a;
	i=2;
	while(i<=n)
	{
		printf("enter the value %d:",i);
		scanf("%d",&a);
		if(a>b)
			printf("%d is bigger than:%d\n",a,b);
		else if(a<b)
			printf("%d is smaller than:%d\n",a,b);
		else
			printf("it is equal\n");
		b=a;
		i++;
	}
	         return 0;
}
