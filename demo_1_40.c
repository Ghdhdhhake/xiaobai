#include<stdio.h>
int main(void)
{
	int i, j;
	char c;
	for (i = 1; i <= 6; i++) //外层控制行数
	{
		for (j = 0, c = 'F'; j < i; j++, c--)//内层控制输出字符
			printf("%c",c);
		printf("\n");
	}
	return 0;
}