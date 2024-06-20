/*Implement calculator program using macros. Write down your own header file ,where the calculator operations are written as macros are defined(ADD,SUB,MUL,DIV).*/

#include"mycalc.h"
int main()
{
	int a,b;
	printf("enter the numbers:\n");
	scanf("%d\n%d",&a,&b);
	printf("a+b=%d\n",ADD(a,b));
	printf("a-b=%d\n",SUB(a,b));
	printf("a*b=%d\n",MUL(a,b));
	printf("a/b=%d\n",DIV(a,b));
}
