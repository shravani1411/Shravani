#include<stdio.h>
int main()
{
int a;
float bill;

printf("Enter a number:");
scanf("%d",&a);
if(a<=200)
{
printf("%f\n",bill=100);
}
else if(201<=a<=400)
{
printf("%f\n",bill=100+0.65*(a-200));
}
else if(401<=a<=600)
 {
 printf("%f\n",bill=230+0.8*(a-400));
 }
else if(601<=a)
 {
 printf("%f\n",bill=390+1*(a-600));
 }
}
