#include<stdio.h>
int maxdivisor(int n, int m)
{
	int temp, a, b;
	if (n < m)
	{
		temp = n;
		n = m;
		m = temp;
	}
	a = n; b = m;
	while (b != 0)/*利用辗除法，直到b为0为止*/
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
void multiple(int n, int m, int k)
{
	printf("multiple = %d", (n * m) / k);
}
int main()
{
	int a, b, c;
	scanf_s("%d %d", &a, &b);
	int maxdivisor(int n, int m);
	c = maxdivisor(a, b);
	printf("maxdisor = %d\n", c);
	void multiple(int n, int m, int k);
	multiple(a, b, c);
}