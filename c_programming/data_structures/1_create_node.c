
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{
	node *h=0,*n,*t;
	char choice;
	while(1)
	{
		n=(node *)malloc(sizeof(node));
		printf("enter the data:");
		scanf("%d",&n->data);
		n->next=0;
		if(h==0)
		{
			h=t=n;
		}
		else
		{
			t->next=n;
			t=n;
		}
		printf("do u want to continue y/n:");
		getchar();
		scanf("%c",&choice);
		if(choice=='n')
		{
			break;
		}
	}
	t=h;
	while(t!=0)
	{
		printf("%d\n",t->data);
		t=t->next;
	}
	//	getchar();
}
