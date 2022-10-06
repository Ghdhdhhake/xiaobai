#include<stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];
	double bills[SIZE];
	int* pti = dates;
	int* ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (short index = 0; index < SIZE; index++) 
		printf("pointers + %d : %10p %10p\n",index,pti+index,ptf+index);
	return 0;






}