/*5) implement your own string reverse function using the above swap function to swap the edges while reversing.

try calling the string reverse function using
1) string variable
2) string constant*/

#include<stdio.h>
#include<string.h>
void mystrrev(char s[],int n);
int main()
{
	int i,n;
	printf("Enter size:\n");
	scanf("%d",&n);
	char s[n];
	printf("Enter the string variable:\n");
	scanf("%s",s);
//	char *p;
//	printf("Enter the string constant:\n");
//	scanf("%s",p);
	mystrrev(s,n);
	printf("string reverse:");
		printf("%s",s);
	printf("\n");
}

void mystrrev(char s[],int n)
{
	int i,j,temp;
	for(i=n-1,j=0;i>=0&&j<n/2;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
s[n]=0;
}



