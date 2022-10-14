
#include <stdio.h>
int main(void)
//
{
	int i, k, c, j, m, l = 0;
	c = 1;
	int a[5][5];
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			a[i][j] = c;
			c++;
		}
	}

	for (i = 0; i < 5; i++) {
		int max = 0;
		for (j = 0; j < 5; j++) {
			if (i < 4) {
				c = a[i][4];
				a[i][4] = a[i][i];
				a[i][i] = c;
			}
		}
	}
	c = 0;
	for (i = 0; i < 5; i++) {
		c += a[i][i];
	}
	for (i = 0; i < 3; i++) {
		switch (i)
		{
		case 0: k = 5; m = 0; break;
		case 1: k = 4; m = 1; break;
		case 2: k = 3; m = 2; break;
		}
		for (j = m; j < k; j++) {
			l += a[j][i];
		}

	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d ", a[i][j]);
			if (j == 4)
				printf("\n");

		}
	}
	printf("对角线元素之和：%d\n 元素之和：%d", c, l);
}