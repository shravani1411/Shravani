/*7.Count no of bits to be flipped to convert A to B
ex: A=1101101 B=1011011
o/p:4 bits */

#include<stdio.h>
int main()
{
	int a,b,i,x,c=0;
	printf("Enter x & y values:\n");
	scanf("%d%d",&a,&b);
	x=a^b;
	for(i=0;i<16;i++)
	{
		if(x&0x01==1)
		{
			c++;
		}
		x=x>>1;
	}
	printf("no. of bits to be flipped to convert a to b is:%d\n",c);
}


