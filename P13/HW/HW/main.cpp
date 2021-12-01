#include<stdio.h>
#include<stdlib.h>

void cubebyref(int &n);

int main()
{

	int num = 5;
	printf("The origin value of number is %d\n", num);
	cubebyref(num);
	printf("The new number is %d\n", num);
	system("pause");
	return 0;
	system("pause");
	return 0;
}
void cubebyref(int &n)
{
	n *= n * n;
}