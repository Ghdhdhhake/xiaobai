#include<stdio.h>
int main(void)
{
	printf("Please input your number : \n");
	int x, a, b,count;
	a = 0;
	b = 0;
	count = 0;
	scanf_s("%d", &x);
	while (x > 0) {
		a = x % 10;
		printf("%d\n",a);
		b = a + b * 10;
		x /= 10;
		count++;
	}
	printf("count = %d \n x = %d", count, b);
	return 0;
}