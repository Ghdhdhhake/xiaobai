#include<stdio.h>
int main()
{
	char c;
	int a = 0;
	int b = 0;
	int e = 0;
	int d = 0;
	printf("Printf input some characters :\n");//�����ַ���
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')//�ж��ַ����е���ĸ����
		{
			a++;
		}
		else if (c == ' ')//�ַ����еĿո����
		{
			b++;
		}
		else if (c >= '0' && c <= '9')//�ַ����е����ָ���
		{
			e++;
		}
		else//�ַ����е������ַ�����
		{
			d++;
		}
		
	}
	printf("All in all : char = %d space = %d number = %d others = %d", a, b, e, d);//��������ַ��ĸ���
	return 0;
}