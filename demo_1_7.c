#include<stdio.h>
struct date {
	int month;
	int day;
	int year;
};
int main(int argc, char const* aargy[])
{
	struct date today;
	today = (struct date){ 07,31,2014 };
	struct date day;
	day = today;
	printf("Today's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	printf("The day's date is %i-%i-%i.\n",
		today.year,today.month,today.day);
	return 0;
}