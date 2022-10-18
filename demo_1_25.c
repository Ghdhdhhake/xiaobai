#include<stdio.h>
int main()
{
	double a,h;
	scanf_s("%lf %lf",&a,&h);
	double c,s1, s2, v1, v2;
	c = 2 * 3.14159 * a;
	s1 = 3.14159 * a * a;
	s2 = 4 * 3.14159 * a * a;
	v1 = 4 / 3 * 3.14159 * a * a * a;
	v2 = 3.14159 * a * a * h;
	printf("圆周长=%.2f 圆面积=%.2f 圆球表面积=%.2f 圆球体积=%.2f 圆柱体积=%.2f",c,s1,s2,v1,v2);
	return 0;
} 