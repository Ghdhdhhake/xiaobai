#include<stdio.h>
#define NUMBER 32
int main(void)
{
	for (int i = 0; i <= NUMBER; i++) {
		if (i % 8 == 0)
			printf("\n");
		else
			printf("$");
	
	}
	return 0;
}