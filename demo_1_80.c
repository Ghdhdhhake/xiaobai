#include<stdio.h>
int main()
{
	int number[10], temp;
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &number[i]);
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9 - i; j++) {
			if (number[j] > number[j + 1]) {
				temp = number[j];
				number[j] = number[j + i];
				number[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%3d", number[i]);
	}
	/*int i, j;
	for (i = 2; i < 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0)break;
			
		}
		if (j == i) {
			printf("%d\n", i);
		}
	}*/
	return 0;
}