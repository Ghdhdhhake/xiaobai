
	
#include<stdio.h>
int main(void)
{
	int i, j, k, n = 0;
	for (i = 1; i < 5; i++)
		for (j = 1; j < 5; j++)
			for (k = 1; k < 5; k++)
			{
				if (i != k && i != j && j != k) {
					n++;
					printf("%d%d%d\n", i, j, k);
				}
			}
	printf("一共有%d个/n ", n);
	return 0;
}