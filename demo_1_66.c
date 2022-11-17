#include<stdio.h>
int sum(int* start, int* end);
#define SIZE 10
int main()
{
	int number[SIZE] = { 23,34,56,6,4,4,4,3,3,45};
	long answer;
	answer = sum(number, number + SIZE);
	printf("Total = %d", answer);
	return 0;
}
int sum(int* start, int* end)
{
	int total = 0;
	while (start < end)
	{
		total += *start;
		start++;
	}
	return total;
}