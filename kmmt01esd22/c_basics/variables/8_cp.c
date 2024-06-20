#include<stdio.h>
int main()
{
float sp,p,n,cp;
printf("enter sp, p and n values:\n");
scanf("%f\n%f\n%f\n", &sp, &p, &n);
cp=(sp-p)/n;
printf("cost price of items=%f", cp);
return 0;
}
