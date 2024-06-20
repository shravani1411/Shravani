/*Calculate and print the below : 1 - 1/2! + 1/3! - 1/4! + 1/5! ….upto 1/n!*/
#include<stdio.h>
int main()
{
	int n;
	float j,i,f=1,c=0,d=0;
	printf("enter value\n");
	scanf("%d",&n);

	for(i=2;i<=n;i++)
	{
		for(j=i;j>0;j--)
		{
			f=f*j;
		}
		c=1/f;
			d=d+c;
		f=1;
	}
	d=1-d;
	printf("%f\n",d);
}

