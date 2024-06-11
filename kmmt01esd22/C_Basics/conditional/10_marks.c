#include<stdio.h>
int main()
{
int t,h,e,m,p,s,sum;
float per;
printf("enter the marks:\n");
scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&p,&s);
sum=t+h+e+m+p+s;
per=(sum*100)/600;
printf("Total per:%f",per);
if(per>=80)
{
printf("Honours\n");
}
else if(per>=60)
{
printf("first division");
}
else if(per>=50)
{
printf("second div\n");
}
else if(per>=40)
{
printf("Third div\n");
}
else
{
printf("fail\n");
}
}
