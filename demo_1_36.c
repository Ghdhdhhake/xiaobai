#include<stdio.h>
int main(void)
{
	int count;//��¼��ɲ��ظ���λ���ĸ���
	count = 0;
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			for (int k = 1; k < 5; k++) {
				if (i != j && j != k && i != k) { //�ҳ���ɲ��ظ�����λ��
					count++;
					printf("%d%d%d\n", i, j, k);  //���ÿһ����λ��
				}
			}
		}
	}
	printf("count = %d",count);//�����λ���ĸ���
	return 0;
}