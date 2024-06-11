
#include<stdio.h>
int main()
{
int x=10,y=12;
int const *p=&x;
printf("%d\t%d\n",x,*p);

p=&y;
//*p=11;   xxx
printf("%d\t%d\n",y,*p);
}
