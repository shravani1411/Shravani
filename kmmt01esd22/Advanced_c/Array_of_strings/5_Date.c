/*5) WAP to read a date and print in the below format:
input : 1-3-2001
output: 1st March, 2001*/

/*WAP to read a date and print in the below format:
input : 1-3-2001
output: 1st March, 2001
 */

#include<stdio.h>
void subscript(int );
int main()
{
	int d,m,y;
	char *months[]={"january","february","march","april","may","june","july","august","september","october","november","december"};
	printf("enter the d-m-y\n");
	scanf("%d-%d-%d",&d,&m,&y);
	printf("%d",d);
	subscript(d);
	printf(" %s, %d\n",months[m-1],y);
	return 0;
}
void subscript(int n)
{
	switch(n)
	{
		case 1:case 21:case 31:printf("st");
				       break;
		case 2:case 22:printf("nd");
			       break;
		case 3:case 23:printf("rd");
			       break;
		default:printf("th");
			break;
	}
}


