/*10) Implement atof function ( string to float conversion) function takes a numerical string as input and returns the equivalent float number as output.

	eg., input : 3.145600

	output: 3.145*/

#include<stdio.h>
#include<string.h>
double atoi(const char s[]);
int main()
{
	char s[10];//="3.1456000";
	printf("enter flot string:");
	scanf("%s",s);
	printf("ascii to float :%0.3f\n",atoi(s));
}
double atoi(const char s[])
{
	int c=0,d=1,j=0,intg=1,q=0;
	float dec=1;
	int i;
	int p=strlen(s);
	double sum=0;
	for(i=0;i<p;i++)
	{
		if(s[i]=='.')
		{
			c++;
			continue;
		}
		else
		{
			if(c!=0)
			{
				d=d*10;
				sum=(sum*10)+(s[i]-48);
				dec=sum;
			}
			else
			{
				sum=(sum*10)+(s[i]-48);
				intg=sum;}
		}
	}
	dec=dec/d;
	printf("dec=%f\n",dec);
	return dec;
}

