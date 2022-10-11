#include<stdio.h>
int main(void)
{
	int x;
	double sum = 0;
	int cnt = 0;
	int number[100];
	scanf_s("%d", &x);
	while (x != -1) {
		number[cnt++] = x;
		sum += x;
		cnt++;
		scanf_s("%d",&x);
	}
	if (cnt > 0) {
		printf("%f", sum / cnt);
		for (int i = 0; i < cnt; i++) {
			if (number[i] > sum / cnt)
				printf("%d\n",number[i]);
		}
	}
	return 0;
}