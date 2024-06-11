/*7)  "Complete the below program :
  int x; int y;
  int * const ptr = &x;
  we cannot modify ptr to point to a different address using ptr directly. Do it indirectly."*/

#include<stdio.h>
int main()
{
	int x=0;
	int y=0;
	int *const ptr = &x;
	int **p = &ptr;
	*ptr = 10;
	printf("x = %d\t&x = %p\tptr = %p\n",x,&x,ptr);
	*p = &y;
	printf("y = %d\t&y = %p\tptr = %p\n",y,&y,ptr);
	return 0;
}
