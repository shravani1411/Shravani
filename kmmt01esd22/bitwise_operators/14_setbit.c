/*14. Write a functionsetbits(x,p,n,y)that return x with then bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged.
e.g. if x = 10101010 (170 decimal) and y = 10100111 (167 decimal) and n = 3 and p = 6 then
you need to strip off 3 bits of y (111) and put them in x at position 10xxx010 to get answer
10111010. Your answer should print out the result in binary form although input can be in
decimal form.
Your output should be like this:
x = 10101010 (binary)
y = 10100111 (binary)
setbits n = 3, p = 6 gives x = 10111010 (binary).*/

#include<stdio.h>
void printbin(int x);
int setbits(int x,int p,int n,int y);
int main()
{
	int x,y,n,p,j;
	printf("enter 2 values:\n");
	scanf("%d%d",&x,&y);
	printf("enter position and right most bits:\n");
	scanf("%d%d",&p,&n);
	printf("before bits set:\n");
	printbin(x);
	printbin(y);
	printf("After bits set:\n");
	j=setbits(x,p,n,y);
	printbin(j);
	printbin(y);
	return 0;
}

void printbin(int x)
{
	int i;
	for(i=0;i<8;i++)
	{
		if(x&0x80)
			printf("1");
		else
			printf("0");
		x=x<<1;
	}
	printf("\n");
}

int setbits(int x,int p,int n,int y)
{
	return x & ~(~(~0<<n) << (p-n)) | ( y << (p-n) & ~(~0<<n)<<p-n);
}
