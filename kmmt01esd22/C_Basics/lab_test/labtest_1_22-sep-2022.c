

#include<stdio.h>
int main()
{
	int m,p,c,t3,t2;
	printf("enter m,p & c marks:\n");
	scanf("%d%d%d",&m,&p,&c);
	if(m>=60&&m<=100)
		printf("eligible\n");
	else
		printf("not eligible\n");
	if(p>=50&&p<=100)		
		printf("eligible\n");		
	else
		printf("not eligible\n");
	if(c>=40&&c<=100)
		printf("eligible\n");
	else
		printf("not eligible\n");
	t3=m+p+c;
	printf("total marks in all three subjects is %d\n",t3);
	if(t3>=200&&t3<=300)
		printf("eligible\n");
	else
		printf("not eligible\n");
	t2=m+p;
	printf("total marks in maths & physics is %d\n",t2);
	if(t2>=150&&t2<=200)
		printf("eligible\n");
		else
			printf("not eligible\n");
}
