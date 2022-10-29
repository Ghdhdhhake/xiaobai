#include<stdio.h>
int get_max(int number[], int n);
int main(void)
{
	int source[5];
	printf("Please input your number :\n");
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &source[i]);
	printf("Tne max is %d",get_max(source, 100));
	return 0;
}
int get_max(int number[], int n)
{
	int max = number[0];
	for (int i = 0; i < 5; i++)
		if (max < number[i]) max = number[i];
	
	return max;
}