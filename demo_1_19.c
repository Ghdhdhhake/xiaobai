#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	if (x != 5 && x >= 20)
		printf("True.");
	else { printf("Flase"); }
	
	return 0;
}