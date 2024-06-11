/* "Write down a macro to find out the biggest of two numbers.
   MAX(x,y) should define code to find biggest of x and y."*/

#include<stdio.h>
#define BIG(a,b) (a>b)?a:b
int main()
{
	int a,b;
	printf("enter the numbers:\n");
	scanf("%d\n%d",&a,&b);
if(BIG(a,b))
	printf("%d is bigger\n",BIG(a,b));
else
printf("both are equal\n");
}

