#include<stdio.h>
#define n 10 // ���������ǵ�ǰʮ��
int main(void)
{
	int i, j;
	int str[n][n] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - i); j++)//�ȴ�ӡ�ո�
			printf(" ");
		for (j = 0; j <= i; j++)//�ٴ�ӡ����
		{
			str[i][0] = 1;//ÿһ�е�һλԪ�ض���1
			if (i == j)//��i�е�j��Ԫ�ض�Ϊ1
				str[i][j] = 1;
			if (i != j && j != 0)//�������������������඼�Ǹù���
				str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
			printf("%3d", str[i][j]);//������
		}
		printf("\n");
	}
	return 0;
}

