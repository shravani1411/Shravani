
#include<stdio.h>

int main()
{
	char str[]="welcome to jungle";
	int *a=(int *)&str[0];
	a+=3;
	printf("%c\n",*a);
}


