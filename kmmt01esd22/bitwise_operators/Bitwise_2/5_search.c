/*Write a function to search pattern count in a number. func_search(int num,int pattern)*/

#include<stdio.h>
int search(int num,int pattern);
int main()
{
	int num,pattern=3,x;
	printf("Enter a number:\n");
	scanf("%x",&num);
	x=search(num,pattern);
	printf("count:%d\n",x);
}

int search(int num,int pattern)
{
	int c=0;
	while(num>0)
	{
		if((num&pattern)==pattern)
		{
			c++;

		}
		num=num>>1;
	}
	return c;
}
