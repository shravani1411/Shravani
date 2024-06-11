/*1	Implement the calculator program using Command line arguments
	eg., input:  >./calc   56 + 671
	output : 727
	note: when giving * in commandline, always give "*" */

#include<stdio.h>
int atoi(char s[]);
int main(int argc,char*argv[])
{
	int a,b,c;
	char opr;
	a=atoi(argv[1]);
	b=atoi(argv[3]);
	opr=argv[2][0];
	switch(opr)
	{
		case '+':c=a+b;
printf("Addition:%d\n",c);
			 break;
		case '-':c=a-b;
			 break;
		case '*':c=a*b;
			 break;
		case '/':c=a/b;
			 break;
		case '%':c=a%b;
			 break;
default : printf("wrong operator\n");
	}
//	if(opr=='+'||opr=='-'||opr=='*'||opr=='/'||opr=='%')
//	{
//		printf("the result is %d %c %d=%d\n",a,opr,b,c);
//	}
//	else
//		printf("wrong operator\n");
}

int atoi(char s[])
{
	int i,sum=0;
	for(i=0;s[i]!='\0';i++)
	{
		sum=sum*10;
		sum=sum+s[i]-48;
	}
	return sum;
}
