#include <stdio.h>
#include <stdlib.h>


int main()
{
	char temp,s[800] = {0};

	scanf_s("%s", s,800);
	for (int i = 0; i < 800; i++)
	{
		if(s[i]==0)
			for (int j = 0; j < (i)/2; j++)
			{
				temp = s[j];
				s[j] = s[i -1- j];
				s[i-1 - j] = temp;
			}
	}
	printf("%s", s);

	printf("\n");

	system("pause");
	return 0;
}
