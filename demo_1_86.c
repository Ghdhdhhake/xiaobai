#include<stdio.h>
void flower(int t)
{
	int a, b, c, d;
	d = t;
	a = t % 10;
	t /= 10;
	b = t % 10;
	t /= 10;
	c = t % 10;
	if ((a * a * a + b * b * b + c * c * c) == d)
		printf("yse");
	else
		printf("no");
	return 0;

}
int main()
{
	int x;
	scanf_s("%d", &x);
	void flower(int t);
	flower(x);
	return 0;
}
//int fact(int t) 
//{
//	int n = 1, i = 1;
//	while (i <= t) {
//		n = n * i;
//		i++;
//	}
//	return n;
//}
//int main()
//{
//	int x = 5;
//	int fact(int t);
//	printf("x! = %d", fact(x));
//
//}
//int sum(int n) 
//{
//	int sum = 0, i;
//	i = 1;
//	while (i <= 100) {
//		sum = sum + i;
//		i++;
//	}
//	return sum;
//}
//int main()
//{
//	int n = 100, s;
//	int sum(int n);
//	printf("sum = %d", sum(n));
//
//}