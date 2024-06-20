#include "myheader.h"
int main()
{
	int total,m,y,lop;
	printf("Total salary of the employee:");
	scanf("%d",&total);
	printf("month:");
	scanf("%d",&m);
	printf("Year:");
	scanf("%d",&y);
	printf("Number Of LOPs:\n");
	scanf("%d",&lop);
	if(total>0){
		if(CalculateNetSalary(total,lop,m,y))
		{
			printf("Salary Payable is:%d ",CalculateNetSalary(total,lop,m,y));
		}
		else
			printf("Invalide Input");
	}
	else
		printf("Invalide Input");
}
