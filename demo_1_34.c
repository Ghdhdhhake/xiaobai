#include<stdio.h>
int main(void)
{
	printf("Please input your numbers :\n");
	int a[3][4];
	int j, k, row = 0, colum = 0, max;
	for (j = 0; j < 3; j++) {		//输入二维数组中的元素
		for (k = 0; k < 4; k++) {
			scanf_s("%d",&a[j][k]);
		}
	}
	max = a[0][0];
	for (j = 0; j < 3; j++) { //找出数组中最大的元素
		for (k = 0; k < 4; k++) {
			if (a[j][k] > max) {
				max = a[j][k];
				row = j;
				colum = k;
			}
		}
	}
	printf("All in all : max = %d row = %d colum = %d\n", max, row, colum);//输出最大元素的值和在数组中的位置
	return 0;
}