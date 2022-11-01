#include<stdio.h>
#include<math.h>
int main(void)
{
	double  x = 0;
	printf("Please input your number :\n");
	double number;
	while (1)
	{
		scanf_s("%lf", &number);
		if (number > 0 && number < 1000)
		{
			x = number;
			x = sqrt(x);
			printf("%d\n",(int)x);
		}
			
		else
			printf("Please input your number :\n");
	}
	
	return 0;
}