#include<stdio.h>
int main(void)
{
	int x;
	scanf_s("%d",&x);//输入整数
	x = 12321;
	int a , y, z;
	y = 0;
	z = x;           //将x的值保存在z中
	while (x > 0)    //对整数进行倒序
	{
		a = x % 10;
		y = y * 10 + a;
		x /= 10;
	} 
	if (z == y)      //判断整数是否为回文整数
		printf("ture");
	else
		printf("falase");
	return 0;
}