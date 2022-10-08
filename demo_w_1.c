#include<stdio.h>
#include<math.h>
int main(void)
{
	int i, j, k, n = 0;
	for (i = 1; i < 5; i++)
		for (j = 1; j < 5; j++)
			for (k = 1; k < 5; k++)
			{
				if (i != k && i != j && j != k) {
					n++;
					printf("%d%d%d\n", i, j, k);
				}
			}
	printf("一共有%d个\n", n);
	return 0;
}
//{
//	long int i;
//	int bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
//	scanf_s("%ld", &i);
//	bonus1 = 100000 * 0.1; bonus2 = bonus1 + 100000 * 0.75;
//	bonus4 = bonus2 + 200000 * 0.5;
//	bonus6 = bonus4 + 200000 * 0.3;
//	bonus10 = bonus6 + 400000 * 0.15;
//	if (i <= 100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000) * 0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000) * 0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 400000) * 0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000) * 0.015;
//	else
//		bonus = bonus10 + (i - 1000000) * 0.01;
//	printf("bonus=%d", bonus);
//}
//{
//	long int i, x, y;
//	for (i = 1; i < 1000000; i++) {
//		x = sqrt(i + 100);
//		y = sqrt(i + 268);
//		if (x * x == i + 100 && y * y == i + 268) {
//			printf("\n%d\n", i);
//		}
//	}
//	return 0;
//
//}
