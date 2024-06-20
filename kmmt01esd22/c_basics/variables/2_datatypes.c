#include<stdio.h>
int main()
{
int a;
float b;
double c;
char d;
printf("enter variables with all datatypes:\n");
scanf("%d %f %lf %c", &a, &b, &c, &d);
printf("Result: %d\n%f\n%lf\n%c", a,b,c,d);
return 0;
}
