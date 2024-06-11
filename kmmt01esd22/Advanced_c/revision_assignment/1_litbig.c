//1) WAP to check if an   architecture is Little Endian or Big Endian? 

#include<stdio.h>
int main()
{
	unsigned int n=0x87456321;
	char *ch=(char *)&n;
	printf("ch is =0x%x\n",*ch);
	if(*ch==0x21)
		printf("little endian\n");
	else
		printf("big endian\n");
}
