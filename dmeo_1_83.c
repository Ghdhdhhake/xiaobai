#include<stdio.h>
int main()
{
	int a[100];//����һ������洢����
	int i, j, n, k, m;
	for (i = 1; i < 1000; i++) {//���뷶Χ
		n = i;
		k = -1;
		for (j = 1; j < i; j++) {//����ҵ�����������ӣ��ǾͰ�������洢��������
			if ((i % j) == 0) {
				k++;
				n = n - j;
				a[k] = j;
			}
			
		}
		if (n == 0) {//�жϸ����Ƿ�������������������Ǿ����
			printf("%d = %d", i, a[0]);
			for (m = 1; m < k; m++)
				printf(" + %d", a[m]);
			printf(" + %d  ", a[k]);
		}
	}
	return 0;
}
