#include"market.h"
int main()
{
	int j=1;
	while(j==1){
		printf("Enter stock:\n");
		scanf("%d",&stock);
		printf("Enter limit:\n");
		scanf("%d",&limit);
		if(limit>=stock){
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
			case 1:printf("The total stock is:%d\n",stock);
			       break;
			case 2:sale();
			       break;
			case 3:purchase();
			       break;
			case 4: j=0;
				break;
		}
	}
}

