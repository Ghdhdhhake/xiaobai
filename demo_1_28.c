#include<stdio.h>
int main()
{
	int a[10];
	for (int i = 0; i < 10; i++)   //��������Ԫ��
		scanf_s("%d", &a[i]);
	int m;
	m = 0;
	for (int j = 0; j < 9; j++) {  //������Ԫ�ؽ�������
		for (int i = 0; i < 9; i++) {
			if (a[i] > a[i + 1])
			{
				m = a[i];
				a[i] = a[i + 1];
				a[i + 1] = m;
			}
		}
	}
	for (int i = 0; i < 10; i++) //���ð������������
		printf("%d ", a[i]);

	return 0;
}