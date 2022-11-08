#include<stdio.h>
#define SIZE 5
int sum(int arr[], int n);
int main()
{
	int marbles[SIZE] = {12,34,54,65,34};
	long answer;
	answer = sum(marbles, SIZE);
	printf("The total number of marbles is %ld.\n",answer);
	printf("The size of marbles is %zd bytes.",sizeof marbles);
	return 0;
}
int sum(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += arr[i];
	}
	printf("The size of ar is %zd bytes.\n", sizeof arr);
	return total;
}