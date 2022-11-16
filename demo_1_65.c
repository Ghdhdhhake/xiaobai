#include<stdio.h>
int main(void)
{
	const char* str = "Just do it.";
	const char* ptr;
	ptr = str;
	printf("str = %s; &str = %p; value = %p\n", str, &str, str);
	printf("ptr = %s; &ptr = %p; value = %p", ptr, &ptr, ptr);
	return 0;
}