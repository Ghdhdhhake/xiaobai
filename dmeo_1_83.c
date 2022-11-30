#include<stdio.h>
int main()
{
	int a[100];//定义一个数组存储因子
	int i, j, n, k, m;
	for (i = 1; i < 1000; i++) {//输入范围
		n = i;
		k = -1;
		for (j = 1; j < i; j++) {//如果找到这个数的因子，那就把这个数存储在数组中
			if ((i % j) == 0) {
				k++;
				n = n - j;
				a[k] = j;
			}
			
		}
		if (n == 0) {//判断该数是否满足条件，如果满足那就输出
			printf("%d = %d", i, a[0]);
			for (m = 1; m < k; m++)
				printf(" + %d", a[m]);
			printf(" + %d  ", a[k]);
		}
	}
	return 0;
}
