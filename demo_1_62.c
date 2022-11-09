#include<stdio.h>
enum DAY
{
	MON=1, THR, WEN, THU, FIR, SAT, SUN
};
int main()
{
	enum DAY day;
	day = SAT;
	printf("%d", day);
	return 0;
}