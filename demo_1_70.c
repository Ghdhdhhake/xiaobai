#include<stdio.h>
int main()
{
	float number_1, number_2;
	number_1 = number_2 = 1.0;

	for (int i = 1; i <= 100; i++)
	{
		number_1 = number_1 + number_2;
		number_2 = number_1 + number_2;
		printf("%.1lf,%.2lf", number_1, number_2);
	}
	return;
}