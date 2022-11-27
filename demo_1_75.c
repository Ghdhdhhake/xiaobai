#include<stdio.h>

int main()
{
	int i, j, a[10][10];
	for (i = 0; i < 10; i++)
	{
		a[i][i] = 1;
		a[i][0] = 1;
	}
	for (i = 2; i < 10; i++) {
		for ( j = 1; j <= i - 1; j++) {
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

		}
	}
	for (i = 0; i < 10; i++) {
		for (j = 0; j <= i; j++) {
			printf("%2d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
	/*int i, j;
	int a[5] = {23, 34, 45, 56};
	int m, end, temp1, temp2;
	scanf_s("%d", &m);
	end = a[3];
	if (m >= end)
		a[4] = m;
	else {
		for ( i = 0; i < 4; i++) {
			if (a[i] > m) {
				temp1 = a[i];
				a[i] = m;
				for ( j = i + 1; j < 5; j++) {
					temp2 = a[j];
					a[j] = temp1;
					temp1 = temp2;
				}
				break;

			}
		}
	}
	for ( i = 0; i < 5; i++)
		printf(" %d ", a[i]);
	return 0;*/

	/*int number[SIZE], ptr;
	for (int i = 0; i < SIZE; i++) { 
		scanf_s("%d", &number[i]);
	}
	for (int j = 0; j < SIZE/2 ; j++) {
		ptr = number[j];
		number[j] = number[SIZE - j - 1];
		number[SIZE - j - 1] = ptr;
	}
	for (int i = 0; i < SIZE; i++)
		printf("%d ",number[i]);
	return 0;*/
	/*int sum = 0;
	int number[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &number[i][j]);
		}
	}
	for (int i = 0; i < 3; i++)
		sum = sum + number[i][i];
	printf("sum = %d", sum);
	return 0;*/
	
}