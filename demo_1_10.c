#include<stdio.h>
//#include<math.h>
int main(void)
{
	int H;
	scanf_s("%d", &H);
	double sum;
	sum = 0;
	for (int i = 1; i <= H; i++) {
		sum += 1.0 / (4.0* i - 3.0) - 1.0 / (4.0 * i - 1.0);
	}
	printf("sum = %.2f", sum * 4);
	return 0;
}