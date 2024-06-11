/*9) "Complete the below program :
  const int x = 10;
  const int y = 10;
  const int * const ptr = &x;
  int **pptr = &ptr;
  modify the value of x,y , and ptr (to point to y). You can only create one extra pointer variable."*/

#include<stdio.h>
int main()
{
	const int x=10;
	const int y=10;
	const int * const ptr=&x;
	int **pptr=&ptr;
	printf("x=%d\n",x);
	printf("Before changing x=%d,y=%d\n",x,y);
	printf("changing x ,y value :\n");
	scanf("%d%d",&x,&y);
	printf("After changing value x=%d,y=%d:\n",x,y);
	*pptr=&y;
	printf("*ptr=%d\n",*ptr);
}

