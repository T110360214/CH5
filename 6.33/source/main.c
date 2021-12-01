#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int binarySearch(const int a[], int begin, int ed, int key);


int main()
{
	int key,a[SIZE] = { 0 };
	for (int i = 0; i < 50; i++)
	{
		a[i] = i + 1;
	}
	printf("Enter what you want? ");
	scanf_s("%d",&key);
	int result = binarySearch(a, 0, SIZE - 1, key);
	(result == -1)
		? printf("Element is not present in array\n")
		: printf("Element is present at index %d\n",result) ;

	system("pause");
	return 0;
}

int binarySearch(const int a[], int begin, int ed, int key)
{
	if(begin>ed)
		return -1;

	int mid = (begin + ed) / 2;

	if (a[mid] ==key)
		return mid;

	if (a[mid] > key)
		return binarySearch(a, begin, mid-1, key);
	else
		if (a[mid] < key)
			return binarySearch(a, mid+1, ed, key);
}
