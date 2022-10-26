#include<stdio.h>
#define n 10 // 输出杨辉三角的前十行
int main(void)
{
	int i, j;
	int str[n][n] = { 0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - i); j++)//先打印空格
			printf(" ");
		for (j = 0; j <= i; j++)//再打印数组
		{
			str[i][0] = 1;//每一行第一位元素都是1
			if (i == j)//第i行第j列元素都为1
				str[i][j] = 1;
			if (i != j && j != 0)//除了上面两个条件其余都是该规则
				str[i][j] = str[i - 1][j - 1] + str[i - 1][j];
			printf("%3d", str[i][j]);//输出结果
		}
		printf("\n");
	}
	return 0;
}

