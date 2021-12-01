#include<stdio.h>
#include<stdlib.h>
#define SIZE 10


void bubblesort(const int* array,const int size);

int main()
{
	
	int a[SIZE] ={2,6,4,8,10,12,89,68,45,37 };

	printf("Data items in original order\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ",a[i]);
	}

	bubblesort(a, SIZE);

	printf("\nData items in ascending order\n");	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}

void bubblesort(const int* array, const int size)
{
	void swap(int *element1ptr, int *element2ptr);
	for (int pass = 0; pass < size-1; pass++)
	{
		for (int j = 0; j < size-1; j++)
		{
			if (array[j] > array[j + 1])
				swap(&array[j], &array[j + 1]);
		}
	}
}

void swap(int *element1ptr, int *element2ptr)
{
		int hold = *element1ptr;
		*element1ptr = *element2ptr;
		*element2ptr = hold;
}
