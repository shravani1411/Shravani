/*WAP Swap any two numbers using bitwise operators. How does it work?*/

#include<stdio.h>
int main()
{
int a,b;
printf("Enter the numbers:\n");
scanf("%d%d",&a,&b);
a=a-(~b+1);
b=a+(~b+1);
a=a+(~b+1);
printf("After swap:a=%d,b=%d\n",a,b);
}
