/*4.Data compression and expansion using bitwise operators

	4a.Compress: [10M]

	Write a ToDate() function that accepts three parameters, a month, day, and year value.

	This function should return the 16-bit packed date value using the mentioned in the below format.

	The ToDate() function should automatically convert dates in the range 1900-1999 to the range 0..99.

	15	14	13	12	11	10	9	8	7	6	5	4	3	2	1	0	

	M	M	M	M	D	D	D	D	D	Y	Y	Y	Y	Y	Y	Y
	
	1	0	0	1	0	1	1	0	1	0	0	1	0	0	1	1

	Above example Today Date: 13th Sept 2019.*/

#include<stdio.h>
unsigned short int todate(int m,int d,int y);
void print_binary(unsigned short int x);
int main()
{
	int m,d,y;
	unsigned short int x;
	printf("Enter month,date & year in mm-dd-yy:\n");
	scanf("%d-%d-%d",&m,&d,&y);
	x=todate(m,d,y);
//	printf("x=%d\n",x);
	print_binary(x);
	return 0;
}

unsigned short int todate(int m,int d,int y)
{
	unsigned short int x=0;
//	y=y%100;
//	d=d<<7;
//	m=m<<12;
//	x=m|d|y;
//	return x;
	x=(m<<12)|(d<<7)|(y%100);
}

void print_binary(unsigned short int x)
{
	int i;
	for(i=0;i<16;i++)
	{
		if(x&0x8000)
			printf("1");
		else
			printf("0");
			x=x<<1;
	}
printf("\n");
}
