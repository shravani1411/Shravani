/*4) Write a swap function to swap the values of two character variables.*/

#include<stdio.h>
void swapcbr(char *,char *);
int main()
{
	char a,b;
	printf("Enter a&b values:\n");
	scanf("%c %c",&a,&b);
	printf("After swap: a=%c,b=%c\n",a,b);
	swapcbr(&a,&b);
	printf("After swap cbr: a=%c,b=%c\n",a,b);
}


void swapcbr(char *p1,char *p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
