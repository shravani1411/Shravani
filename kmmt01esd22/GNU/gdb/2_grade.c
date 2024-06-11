#include<stdio.h>
void remarks(float );
int main()
{
	int t,h,e,m,p,s,sum;
	float per;
	printf("enter the marks\n");
	scanf("%d%d%d%d%d%d",&t,&h,&e,&m,&p,&s);
	sum=t+h+e+m+p+s;
	per=(float)(sum*100)/600;
	printf("total per:%f\n",per);
	remarks(per);
}

void remarks(float per)
{

	if(per>=80&&per<=100)
	{
		printf("Honours\n");
	}
	else if(per>=60&&per<=79)
	{
		printf("first division\n");
	}
	else if(per>=50&&per<=59)
	{
		printf("second division\n");
	}
	else if(per>=40&&per<=49)
	{
		printf("third division\n");
	}
	else
	{
		printf("fail\n");
	}
return ;
}

