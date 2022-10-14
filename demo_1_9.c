#include<stdio.h>
#include<math.h>

int main(void)
{ 
	
	double a, b, c, s, t;
	scanf_s("%lf %lf %lf",&a,&b,&c);
	t = sin(c*3.1415926/180);
	s = a * b * t / 2.0;
	printf("s = %.6f\n",s);
	return 0;
}