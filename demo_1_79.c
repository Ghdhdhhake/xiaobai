#include<stdio.h>
int main()
{
	int number[10], str;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &number[i]);
	}
	for (int i = 0; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			if (number[j] > number[j + 1])
			{
				str = number[j];
				number[j] = number[j + 1];
				number[j + 1] = str;

			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", number[i]);
	}

	return 0;
}