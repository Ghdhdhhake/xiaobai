#include<stdio.h>
int main(void)
{
	printf("Please input your numbers :\n");
	int a[3][4];
	int j, k, row = 0, colum = 0, max;
	for (j = 0; j < 3; j++) {		//�����ά�����е�Ԫ��
		for (k = 0; k < 4; k++) {
			scanf_s("%d",&a[j][k]);
		}
	}
	max = a[0][0];
	for (j = 0; j < 3; j++) { //�ҳ�����������Ԫ��
		for (k = 0; k < 4; k++) {
			if (a[j][k] > max) {
				max = a[j][k];
				row = j;
				colum = k;
			}
		}
	}
	printf("All in all : max = %d row = %d colum = %d\n", max, row, colum);//������Ԫ�ص�ֵ���������е�λ��
	return 0;
}