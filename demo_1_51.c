#include<stdio.h>
#define SIZE 40
char* read_char(char *str, int n);
int main(int argc, char *argy[])
{
	char test[SIZE];
	puts("Start to test function . Enter a string .");
	read_char(test, SIZE);
	puts("The string you input is : ");
	puts(test);
	return 0;
}
char* read_char(char* str, int n)
{
	int i = 0;
	do {
		str[i] = getchar();
	} while (str[i] != EOF && ++i < n);
	return str;
}