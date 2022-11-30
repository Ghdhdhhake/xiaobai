#include<stdio.h>
int main()
{
	int number[10], str;
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &number[i]);
	for (int i = 1; i <= 9; i++) {
		for (int j = 0; j <= 9 - i; j++) {
			if (number[j] > number[j + 1]) {
				str = number[j + 1];
				number[j + 1] = number[j];
				number[j] = str;
			}

		}
	}
	
	for (int i = 0; i < 10; i++)
		printf("%3d", number[i]);
	/*int a[100], j;
	for (j = 1; j <= 100; j++)
		a[j] = j;
	for (int i = 2; i < 100; i++) {
		for (j = 2; j <= 100; j++) {
			if (j % i == 0 && i != j)
				a[j] = 0;
		}
	}
	for (j = 2; j <= 100; j++) {
		if (a[j] != 0)
			printf("%d\n", a[j]);
	}
		*/
		
	return 0;
}