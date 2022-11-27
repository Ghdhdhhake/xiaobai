#include<stdio.h>
#define SIZE 5
int main()
{
	
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			printf("\2\2");
			if (i == 1 && j == 1)
				printf("MM");
			if (i == 9 && j == 9)
				printf("MM");
		}
		printf("\n");
	}
	return 0;
}