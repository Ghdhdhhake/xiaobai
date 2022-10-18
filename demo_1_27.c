#include<stdio.h>
int main()
{
	int m;
	m = 0;
	int a[10] = { 34,45,23,45,6,65,45,48,38,'\0'};
	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {
			if (a[i] > a[i + 1])
			{
				m = a[i];
				a[i] = a[i + 1];
				a[i + 1] = m;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
	
	return 0;
}