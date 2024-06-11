/* WAP to convert Little endian integer to Big endian integer */

#include<stdio.h>
int main()
{
	int x;
	printf("Enter hex number : ");
	scanf("%x",&x);
//	x=((x>>24 & 0x000000ff)|(x>>8 & 0x0000ff00)|(x<<8 & 0x00ff0000)|(x<<24 & 0xff000000));
	x=x<<24|x>>24|(x>>8&0x0000ff00)|(x<<8&0x00ff0000);
	printf("big endian = 0x%x\n",x);
	return 0;
}

