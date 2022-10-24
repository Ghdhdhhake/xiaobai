#include<stdio.h>
int main(void)
{
	int count;//记录组成不重复三位数的个数
	count = 0;
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 5; j++) {
			for (int k = 1; k < 5; k++) {
				if (i != j && j != k && i != k) { //找出组成不重复的三位数
					count++;
					printf("%d%d%d\n", i, j, k);  //输出每一个三位数
				}
			}
		}
	}
	printf("count = %d",count);//输出三位数的个数
	return 0;
}