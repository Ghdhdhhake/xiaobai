#include<stdio.h>
int main(void)
{
	int  a[11];
	for (int i = 0; i < 11; i++) {   //���������Ԫ��
		scanf_s("%d", &a[i]);
		}
	if (a[0] != a[1])
		printf("%d", a[0]);
	for (int i = 1; i < 11; i++) {
		if (a[i] != a[i + 1] && a[i] != a[i - 1]) //�ж�ֻ����һ�ε�Ԫ��
			printf("%d\n", a[i]);
		 }
	return 0;
}
