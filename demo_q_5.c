#include<stdio.h>
int main(void)
{
	int number = 100;
	int* p_one = &number;
	int** p_two = &p_one;
	printf("%d\n", **p_two);
	printf("%d\n",*p_one);
	printf("%p\n", p_one);
	printf("%p\n", p_two);
	printf("%p\n", &p_one);
	printf("%p\n", &p_two);
	printf("%p\n", &number);
	return 0;

}