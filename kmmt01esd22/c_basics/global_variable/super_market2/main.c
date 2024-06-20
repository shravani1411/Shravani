#include"header.h"
int main()
{
	int j=1;
	while(j==1)
{
		printf("Enter stock:\n");
		scanf("%d",&s);
		printf("Enter limit:\n");
		scanf("%d",&limit);
		if(limit>=s){
			j=0;
		}
		else{
			printf("Enter the stock below limit\n");
			j=1;
		}
	}
	j=1;
	while(j==1)
	{
		int i;
		printf("Enter 1)stock 2)sale 3)purchase 4)quit:\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:printf("The total stock is:%d\n",s);
			       break;
			case 2:sale();
			       break;
			case 3:purchase();
			       break;
			case 4: printf("1)Closed stock:%d\n2)no of sales:%d\n3)no of items sold:%d\n4)no of  purchases:%d\n5)no of items purchased:%d\n6)no of costumers visited:%d\n",s,sold,ns,purchased,np,v);
				j=0;
				break;
		}
	}
}
