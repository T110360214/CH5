#include<stdio.h>
#include<stdlib.h>

int cubeByValue(int n);

int main()
{
	int num=5;
	printf("The origin value of number is %d\n",num);
	num = cubeByValue(num);
	printf("The new number is %d\n",num);
	system("pause");
	return 0;
}

int cubeByValue(int n) 
{
	return n * n*n;
}