/*WAP multiply a number by 9 using bit shift.*/

#include<stdio.h>
int main()
{
int n,x=9;
printf("Enter a number:\n");
scanf("%d",&n);
printf("Multiplication:%d\n",(n<<3)+n);
}

