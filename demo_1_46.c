#include<stdio.h>

int main(void)
{
	int x;
	printf("Please enter your number :\n");
	scanf_s("%d", &x);
	while (x <= 0 || x >= 1000) { //�����������ڷ�Χ�ڣ��������룬ֱ����������
		printf("Please enter your number again :\n");
		scanf_s("%d", &x);
	}
	printf("%d", x * x);
	return 0;
}