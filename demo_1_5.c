#include<stdio.h>
void minmax(int a[], int len, int* max, int* man);
int main(void)
{
	int a[] = { 12,34,54,65,76,75,34,45,65,76,65,65,76,56,76,76 };
	int min;
	int max;
	minmax(a, sizeof(a) / sizeof(a[0]), &max, &min);
	printf("max= %d,min = %d\n",max,min);
	return 0;
}
void minmax(int a[], int len, int* max, int* min)
{
	int i;
	*max = *min = a[0];
	for (i = 1; i < len; i++) {
		if (a[i] < *min)
		{
			*min = a[i];
		}
		if(a[i] > *min) {
			*max = a[i];
		}
	}
}