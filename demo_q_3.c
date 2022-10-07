#include<stdio.h>
const int MAX = 3;
int main(void)
{
	int var[] = {100,200,300};
	int* ptr = var;
	printf("var address is: %p\n",&var);
	printf("var address is: %p\n",var);
	printf("ptr = %d\n",*ptr);
	int number = 100;
	int* p =&number;
	printf("number address is:%p\n",&number);
	printf("number address is:%p\n",p);
	printf("%d",*p);



}

