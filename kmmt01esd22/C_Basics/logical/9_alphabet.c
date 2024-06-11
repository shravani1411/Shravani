/* Read a character and print if it is alphabet or not.*/

#include<stdio.h>
int main()
{
char c;
printf("enter the character:\n");
scanf("%c",&c);
(c>=97&&c<=122?printf("it is a alphabet\n"):(c>=65&&c<=90?printf("it is an aplphabet\n"):printf("it is not an alphabet\n")))||printf("it is not an alphabet\n");
}
