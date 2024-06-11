/*4. WAP to display the word expansion of a number
  eg., Input : 789
Output : Seven Eight Nine
 */

#include<stdio.h>
int main()
{
	int n,i=0;
	int arr[10];
	char *str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	printf("enter a number\n");
	scanf("%d",&n);
	do
	{
		arr[i]=n%10;
		n=n/10;
		i++;
	}
	while(n>0);
	for(i=i-1;i>=0;i--)
		printf("%s ",str[arr[i]]);
	printf("\n");
	return 0;
}
