#include<stdio.h>

int main()
{
	int i, j;
	for (i = 1; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if ((i % j) == 0) {
				break;
			}
		
		}
		if (j == i)
			printf("%d\n", i);
	}
	return 0;
}
	//char letter;
	//printf("please input the first letter of someday\n");
	//while ((letter = getch()) != 'Y')/*当所按字母为Y时才结束*/
	//{
	//	switch (letter)
	//	{
	//	case 'S':printf("please input second letter\n");
	//		if ((letter = getch()) == 'a')
	//			printf("saturday\n");
	//		else if ((letter = getch()) == 'u')
	//			printf("sunday\n");
	//		else printf("data error\n");
	//		break;
	//	case 'F':printf("friday\n"); break;
	//	case 'M':printf("monday\n"); break;
	//	case 'T':printf("please input second letter\n");
	//		if ((letter = getch()) == 'u')
	//			printf("tuesday\n");
	//		else if ((letter = getch()) == 'h')
	//			printf("thursday\n");
	//		else printf("data error\n");
	//		break;
	//	case 'W':printf("wednesday\n"); break;
	//	default: printf("data error\n");
	//	}
	//}
	//return 0;

	
	/*int x, count, a, b, t;
	t = 0;
	a = 0;
	b = 0;
	scanf_s("%d", &x);
	t = x;
	while (x != 0) {
		a = x % 10;
		b = b * 10 + a;
		x /= 10;
	}
	if (b == t)
		printf("是回文整数");
	else
		printf("不是回文整数");
	return 0;*/

//double factorial(unsigned int i) {
//	if (i <= 1) {
//		return 1;
//	}
//	return i * factorial(i - 1);
//}
//int main()
//{
//	
//	int i = 5;
//	printf("%d! = %f", i, factorial(i));
//	return 0;
