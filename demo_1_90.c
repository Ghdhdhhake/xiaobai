#include<stdio.h>
int main()
{
	int number[10], temp;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &number[i]);
	}
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (number[j] > number[j + 1]) {
				temp = number[j + 1];
				number[j + 1] = number[j];
				number[j] = temp;

			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", number[i]);
	}
	return 0;

}