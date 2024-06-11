
#include<stdio.h>

int main()
{
	int x=5,y=10,z=15;
	int *arr[5]={&x,&y};
	arr[2]=&z;
	printf("%d\t%d\n",*arr[0],x);
	printf("%d\t%d\n",*arr[1],y);
	printf("%d\t%d\n",*arr[2],z);

}
