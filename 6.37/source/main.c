#include <stdio.h>
#include <stdlib.h>
#define SIZE 8000

void change(int* x, int* y);
void bubble(const int array[], int size);

int main()
{
	//�^���Ʀr�}�C
	int  a[SIZE/2] = { 0 };
	char temp[10], s[SIZE] = { 0 };
	int a_count = 0;
	int i,hi, lo = 0;
	gets(s);//scan �J��Ů�|�����A�]���x�s�ݭn�ΪŮ�
	
	do
	{
		hi = lo;
		for ( i = lo; i < SIZE; i++)
		{

			if (s[i]!=32)//�����Ů�
			{
				hi++;
				if (s[i] == 0)
				{
					lo = i;
					break;
				}
			}
			else
			{
				for (int i = 0; i < 10; i++)//�k�s��r�Ȧs��
				{
					temp[i] = 0;
				}

				for (int add = 0; add+lo < hi; add++)
				{
					temp[add] = s[lo + add];
				}

				a[a_count] = atoi(temp);
				a_count++;
				lo = hi + 1;
				break;
			}
		}
	} while (lo < SIZE && s[lo] != 0);//�����Ŧr��

	//�Ƨ�
	bubble(a,a_count);


	printf("�̤j�Ʀr��:%d\n ",a[a_count-1]);

	system("pause");
	return 0;
}


void change(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void bubble(const int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < (size - 1) - i; j++)
		{
			if (array[j] > array[j + 1])
				change(&array[j], &array[j + 1]);
		}

	}
}