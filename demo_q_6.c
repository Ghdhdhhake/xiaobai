#include<stdio.h>
void exchange(int number_1, int  number_2);
int main(void)
{
	exchange(6,5);
	return 0;
}
void exchange(int number_1, int  number_2) 
{
	int term;
	term = number_1;
	number_1 = number_2;
	number_2 = term;
	printf("number_1 = %d,number_2 = %d",number_1,number_2);


}
//#include<stdio.h>
//void exchange(int* number_a, int* number_b);
//int main(void)
//{
//	int a = 5, b = 6;
//	exchange(&a,&b);
//	printf("a = %d,b = %d", a,b);
//	return 0;
//}
//void exchange(int* number_a, int* number_b)
//{
//	int term;
//	term = *number_a;
//	*number_a = *number_b;
//	*number_b = term;
//}