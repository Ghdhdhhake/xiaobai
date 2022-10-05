#include<stdio.h>
#include<stdbool.h>
int days_of_month(int month, int year);
bool is_leap(int yesr);

int main(void)
{
	printf("总共有%d天\n", days_of_month(1, 2024));
	return 0;
}
int days_of_month(int month, int year) {
	int day_array[12] = { 31,is_leap(year)? 29 : 28,31,30,31,30,31,31,30,31,30,31};
	return day_array[month - 1];

}
bool is_leap(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else 
		return false;
}


