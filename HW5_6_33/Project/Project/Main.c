#include<stdio.h>
#include<stdlib.h>
int binarySearch(int arr[], int start, int end, int target);
int main(void)
{
	int number = 0, element;
	int n[15] = { 0,2,4,6,8,10,12,14,16,18,20,22,24,26,28 };
	printf("Enter a number between 0 and 28: ");
	scanf("%d", &number);
	printf("Index: ");
	for (int k = 0; k < 15; k++)
		printf("%3d", k);
	printf("\nArray: ");
	for (int k = 0; k < 15; k++)
		printf("%3d", n[k]);
	printf("\n");
	element = binarySearch(n, 0, 14, number);
	if (element >= 0)
		printf("%d found in array element %d\n", number, element);
	else
		printf("%d not found\n", number);
	system("pause");
	return 0;
}
int binarySearch(int arr[], int start, int end, int target) {
	if (start > end)
	{
		return -1;
	}

	int mid = start + (end - start) / 2;
	if (arr[mid] == target)
	{
		return mid;
	}
	else if (arr[mid] < target) 
	{
		return binarySearch(arr, mid + 1, end, target);
	}
	else 
	{
		return binarySearch(arr, start, mid - 1, target);
	}
}
