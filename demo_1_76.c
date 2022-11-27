#include<stdio.h>
#define SIZE 5
int main()
{
	int number[SIZE], ptr;
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &number[i]);
	}
	for (int j = 0; j < SIZE; j++) {
		ptr = number[j];
		number[j] = number[SIZE - j - 1];
		number[SIZE - j - 1] = ptr;
	}
	for (int i = 0; i < SIZE; i++)
		printf("%d", number[i]);
	return 0;
}