/*8)  "Complete the below program :
	const int x;
	const int * ptr;
	ptr = &x;
	x value cannot be changed using x or *ptr. Do it indirectly."*/

/*#include<stdio.h>
int main()
{
const int x=5;
const int * p;
p=&x;
//x=10;

scanf("%d",p);
printf("x=%d\n",x);
}*/

#include<stdio.h>
int main()
{
	const int x;
	//int x=0;
	//int y=0;
	int *const ptr = &x;
	int **p = &ptr;
	**p = 10;
	printf("x = %d\t&x = %p\tptr = %d\n",x,&x,*ptr);
	//*p = &y;
	//printf("y = %d\t&y = %p\tptr = %p\n",y,&y,ptr);
	return 0;
}
