#include<stdio.h>
void chline(char c, int cols, int rows);
int main(void)
{
	char c;
	int i, j;
	printf("Please enter the char you want to printf :\n");
	scanf_s("%c", &c);
	printf("Please enter tne rows and cols you want to printf :\n");
	scanf_s("%d %d", &i, &j);
	chline( c, i, j);
	return 0;
}
void chline(char c, int cols, int rows)
{
	for (int m = 0; m < rows; m++) {
		for (int n = 0; n < cols; n++) {
			printf("%c", c);
		}
		printf("\n");
	}
}
;