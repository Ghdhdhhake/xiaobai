#include<stdio.h>
void change(int *p1, int *p2)
{
	int t;
	t = *p1;
	*p1 = *p2;
	*p2 = t;

}
int main()
{
	int a, b;
	int* p1, * p2;
	void change(int* p1, int* p2);
	scanf_s("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	change(p1, p2);
	printf("%d %d", a, b);
	return 0;
}