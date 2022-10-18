#include<stdio.h>
int main()
{
	char c;
	int a = 0;
	int b = 0;
	int e = 0;
	int d = 0;
	printf("Printf input some characters :\n");//输入字符串
	while ((c = getchar()) != '\n')
	{
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')//判断字符串中的字母个数
		{
			a++;
		}
		else if (c == ' ')//字符串中的空格个数
		{
			b++;
		}
		else if (c >= '0' && c <= '9')//字符串中的数字个数
		{
			e++;
		}
		else//字符串中的其它字符个数
		{
			d++;
		}
		
	}
	printf("All in all : char = %d space = %d number = %d others = %d", a, b, e, d);//输出各种字符的个数
	return 0;
}