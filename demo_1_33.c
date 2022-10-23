#include<stdio.h>//¼òµ¥µÄÃ°ÅİÅÅĞò
int main(void)
{
	int a[10];
	int i, j, k;
	printf("please input your numbers:\n");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &a[i]);
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9; i++) {
			if (a[i] > a[i + 1]) {
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;

			}
		}
	}
	printf("The shorted number:\n");
	for (i = 0; i < 10; i++)
		printf("%d ",a[i]);
	return 0;
}