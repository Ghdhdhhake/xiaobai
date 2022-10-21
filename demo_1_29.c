#include <stdio.h>
int main()
{
    int n, i, j, c;
    int x = 0;
    int a[10],b[10];
    n = 10;
    for (i = 0; i < n; i++) //输入数组元素
    {
        scanf_s("%d", &a[i]);
    }
    for (i = 0; i < n; i++) //计算数组中非零元素的个数
    {
        if (a[i] != 0)
        {
            b[x] = a[i];
            x++;
        }
    }
    for (i = 0; i < x - 1; i++) //对数组进行冒泡排序
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
    for (i = 0; i < x; i++) //先输出数组中非零元素冒泡排序后的数组
    {
        printf("%d ", b[i]);
    }
    for (j = 0; j < n - x; j++) //再输出原数组中的零
    {
        printf("0 ");
    }
    return 0;
}