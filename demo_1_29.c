#include <stdio.h>
int main()
{
    int n, i, j, c;
    int x = 0;
    int a[10],b[10];
    n = 10;
    for (i = 0; i < n; i++) //��������Ԫ��
    {
        scanf_s("%d", &a[i]);
    }
    for (i = 0; i < n; i++) //���������з���Ԫ�صĸ���
    {
        if (a[i] != 0)
        {
            b[x] = a[i];
            x++;
        }
    }
    for (i = 0; i < x - 1; i++) //���������ð������
    {
        for (j = 0; j < x - i - 1; j++)
        {
            if (b[j + 1] < b[j])
            {
                c = b[j];
                b[j] = b[j + 1];
                b[j + 1] = c;
            }
        }
    }
    for (i = 0; i < x; i++) //����������з���Ԫ��ð������������
    {
        printf("%d ", b[i]);
    }
    for (j = 0; j < n - x; j++) //�����ԭ�����е���
    {
        printf("0 ");
    }
    return 0;
}