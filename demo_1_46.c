#include<stdio.h>

int main(void)
{
	int x;
	printf("Please enter your number :\n");
	scanf_s("%d", &x);
	while (x <= 0 || x >= 1000) { //如果输入的数在范围内，重新输入，直到满足条件
		printf("Please enter your number again :\n");
		scanf_s("%d", &x);
	}
	printf("%d", x * x);
	return 0;
}