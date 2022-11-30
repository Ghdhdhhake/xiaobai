#include<stdio.h>
#include<math.h>
int main()
{
	
	double h = 100.0;
	double sum, i, str, temp;
	str = 0.0;
	temp = 0.0;
	sum = 100.0;
	for (i = 1.0; i <= 10.0; i++) {
		temp = pow(2.0, i);
		str = h / temp;
		sum = sum + 2.0 * str;
	}
	printf("sum = %lf str = %lf", sum, str);
	return 0;
}