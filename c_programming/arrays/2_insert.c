#include<stdio.h>


int main()
{
	int arr[] = { 1, 2, 4, 5, 6 };
	int d = 3, p = 2;
	int l = sizeof(arr)/sizeof(arr[0]);

	printf("Before insertion : ");
	for (int i = 0; i < l; i++)
		printf("%d ", arr[i]);

	printf("\n");

	for (int i = l - 1; i >= p; i--)
		arr[i + 1] = arr[i];	//moving elements to right side

	arr[p] = d;

	l++;

	printf("After insertion : ");
	for (int i = 0; i < l; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
