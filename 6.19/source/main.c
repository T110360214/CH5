#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int a[3600] = {0};
	int sum[13] = {0};
	srand(time(0));
	for (int i = 0; i < 3600; i++)
	{
		a[i] = (rand() % 6 + 1) + (rand() % 6 + 1);
	}
	for (int i = 2; i <= 12; i++)
	{
		for (int j=0; j < 3600; j++)
		{
			if (a[j] == i)
			{
				sum[i] += 1;
			}
		}
	}
	printf("%-8s","數值");
	for (int i = 2; i < 13; i++)
	{
		printf("%6d",i);
	}
	printf("\n");
	printf("%-6s", "出現次數");
	for (int i = 2; i < 13; i++)
	{
		printf("%6d", sum[i]);
	}

	system("pause");
	return 0;
}
