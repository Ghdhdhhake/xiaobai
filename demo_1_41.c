#include<stdio.h>
int max(int x, int y, int z);
int main(void)
{
	int a, b, c;
	scanf_s("%d %d %d",&a,&b,&c);
	printf("max = %d",max(a,b,c));
	return 0;
}
int max(int x, int y, int z)
{
	int max = x;
	if (y > max)
		max = y;
	if (z > max)
		max = z;
	return max;
}