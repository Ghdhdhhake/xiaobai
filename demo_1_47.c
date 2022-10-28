#include<stdio.h>
int main(void)
{
	int count, x, n, m;
	n = 0;
	m = 0;
	count = 0;
	printf("Please input your number : \n");
	scanf_s("%d", &x);
	while (x <= 0 || x > 99999) {
		printf("Please input your number again :\n");
		scanf_s("%d", &x);
	}
	while (x > 0)
	{
		n = x % 10;
		printf("%d\n", n);
		m = n + m * 10;
		x /= 10;
		count++;
	}
	printf("count = %d, m = %d", count, m);
	return 0;
}