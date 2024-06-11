//Sorting

typedef struct student
{
	int ID;
	char name[20];
	struct student *next;
}student;

#include<stdio.h>
#include<stdlib.h>

student *createnode();
void PrintLL(student *p);
student *sortingll(student *H,student *new);

int main()
{
	student *H=NULL,*N=NULL,*L=NULL;
	char ch;
	while(1)
	{
		N=createnode();
		if(N->ID<0)
		break;
		if(!H)
			H=N;
		else
		{
			//L->next=N;
			H=sortingll(H,N);
			PrintLL(H);
		}
		//L=N;
		printf("do you want to create another node(y/n):\n");
		getchar();
		scanf("%c",&ch);
		if(ch=='N'||ch=='n')
			break;
	}
	PrintLL(H);

}

student *createnode()
{
	student *new=(student*)malloc(sizeof(student));
	printf("enter a student ID and name:");
	scanf("%d%s",&new->ID,new->name);
	new->next=NULL;
	return new;
}

void PrintLL(student *p)
{
	while(p)
	{
		printf("student ID:%d name:%s\n",p->ID,p->name);
		p=p->next;
	}
}

student *sortingll(student *H,student *new)
{
	student *T=H;
	// student *new=createnode();
	if(new->ID<H->ID)
	{
		new->next=H;
		return new;
	}
	else
	{
		while(T->next&&(new->ID>T->next->ID))
		{
			T=T->next;
		}

		if(!(T->next))
			T->next=new;

		else
		{
			new->next=T->next;
			T->next=new;
		}
		return H;
	}
	//}
}

