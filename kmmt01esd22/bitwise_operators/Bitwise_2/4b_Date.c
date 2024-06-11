/*4b. Extract: [10M]

Write three corresponding functions ExtractMonth(), ExtractDay(), and ExtractYear() that expect a 16-bit date value and return the corresponding month, day, or year value.*/

#include<stdio.h>
unsigned short int ExtractMonth(unsigned short int x);
unsigned short int ExtractDate(unsigned short int x);
unsigned short int ExtractYear(unsigned short int x);
int main()
{
	unsigned short int x;
	int m,d,y;
	printf("Enter 16-bit number : ");
	scanf("%hx",&x);
	char a[12][5] = {"Jan","Feb","Mar","Apr","May","Jun","July","Aug","Sept","Oct","Nov","Dec"};
	m = ExtractMonth(x);
	d = ExtractDate(x);
	y = ExtractYear(x);
	printf("%s - %d - %d\n",a[m-1],d,y);
	return 0;
}

unsigned short int ExtractMonth(unsigned short int x)
{
	int m;
	m = x>>12;
	return m;
}

unsigned short int ExtractDate(unsigned short int x)
{
	int d;
	d = (x & 0x0f80)>>7;
	return d;
}

unsigned short int ExtractYear(unsigned short int x)
{
	int y;
	y = (x & 0x7f);
	return y;
}
