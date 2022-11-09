#include<stdio.h>//函数指针
int max(int x, int y)
{
	return x > y ? x : y;
}
int main(void)
{
	int (*ptr)(int, int) = &max;//&可以省略
	int a, b, c, d;
	scanf_s("%d %d %d", &a, &b, &c);
	d = ptr(ptr(a, b), c);
	printf("Max = %d", d);
	return 0;
}