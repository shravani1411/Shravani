/*WAP implement XOR functionality with out using XOR(^) operator.*/

#include<stdio.h>
int main()
{
int x,y;
printf("Enter 2 values:\n");
scanf("%d%d",&x,&y);
printf("xor output:%d\n",~x&y|x&~y);
}
