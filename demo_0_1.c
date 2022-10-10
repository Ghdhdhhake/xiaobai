#include<stdio.h>
int main(void)
//{/*
//	int x;
//	scanf_s("%d", &x);
//	int digit;
//	int ret =0;
//	while (x > 0) {
//		digit = x % 10;
//		ret = ret * 10 +digit;
//		printf("x =%d,digit =%d,ret =%d\n",x,digit,ret);
//		x /= 10;
//	}
//	printf("ret = %d",ret);
//	return 0;*/
//
//}
{
	int x;
	scanf_s("%d",&x);
	int t = 0;
	do {
		int d = x % 10;
		t = t * 10 + d;
		x /= 10;
	} while (x > 0);
	printf("x = %d,t = %d\n", x, t);
	x = t;
	do {
		int d = x % 10;
		printf("%d",d);
		if (x > 9) { printf(" "); }
		x /= 10;
	} while (x > 0);
	printf("\n");
	return 0;
}
