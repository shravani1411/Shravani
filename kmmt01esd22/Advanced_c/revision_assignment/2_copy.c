//2) WAP copy 0x20 data in to 0x7800 memory location?

#include<stdio.h>
int main()
{
	int *ptr=(int *)0x7800;
	*ptr=0x20;
}
