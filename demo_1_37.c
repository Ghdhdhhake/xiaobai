#include<stdio.h>
int main(void)
{
	int x;
	scanf_s("%d",&x);//��������
	x = 12321;
	int a , y, z;
	y = 0;
	z = x;           //��x��ֵ������z��
	while (x > 0)    //���������е���
	{
		a = x % 10;
		y = y * 10 + a;
		x /= 10;
	} 
	if (z == y)      //�ж������Ƿ�Ϊ��������
		printf("ture");
	else
		printf("falase");
	return 0;
}