#include<stdio.h>
int main()
{
	printf("Please input your number :");
	int year, month, day, sum;
	scanf_s("%d %d %d", &year, &month, &day);
	switch (month)
	{
	case 1: sum = 0; break;
	case 2: sum = 31; break;
	case 3: sum = 59; break;
	case 4: sum = 90; break;
	case 5: sum = 120; break;
	case 6: sum = 151; break;
	case 7: sum = 181; break;
	case 8: sum = 212; break;
	case 9: sum = 243; break;
	case 10: sum = 273; break;
	case 11: sum = 304; break;
	case 12: sum = 334; break;
	default: printf("Please enter again.");
	}
	int leap;
	if (year % 400 == 0 || (year % 4 == 0 && year % 400 != 0))
	{
		leap = 1;
		if (month >= 2)
			sum++;
	}
	else
		leap = 0;
	printf("It is the %d day of the year.", sum + day);








	

	
}