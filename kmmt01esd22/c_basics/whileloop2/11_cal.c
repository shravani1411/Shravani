/* Modify the calculator program to perform the operations continuously until the user chooses not to continue further. After every input and output ask if the user wants to continue and take input as y or n. y means continue , n means stop.*/

#include<stdio.h>
int main()
{
	char op,x='y';
	int a,b;
	while(x != 'n'&& x != 'N')
	{
		printf("Enter the operator + - * / %%:\n");
		scanf("%c",&op);
getchar();
		printf("Enter the a,b values:\n");
		scanf("%d%d",&a,&b);
		switch(op)
		{
			case '+':
				printf("%d+%d=%d\n",a,b,a+b);
				break;
			case '-':
				printf("%d-%d=%d\n",a,b,a-b);
				break;
			case '*':
				printf("%d*%d=%d\n",a,b,a*b);
				break;
			case '/':
				printf("%d/%d=%d\n",a,b,a/b);
				break;
			case '%':
				printf("%d%%%d=%d\n",a,b,a%b);
				break;
				//			default:
				//
				//				printf("Given wrong operator, unable to perform operation\n");
		}
		printf("Y to continue \nN to stop\n");
		getchar();		
		scanf("%c",&x);
	}
}

