#include<stdio.h>
#include<stdlib.h>

void cubeByref(int *n);

int main()
{
	int num = 5;
	printf("The origin value of number is %d\n", num);
	cubeByref(&num);
	printf("The new number is %d\n", num);
	system("pause");
	return 0;
}

void cubeByref(int *n)
{
	*n *= *n * *n;
}