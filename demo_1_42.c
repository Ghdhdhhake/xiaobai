#include<stdio.h>
int main(void)
{
	char c[26];
	c[0] = 'A';
	for (int i = 1; i < 26; i++)
	{
		c[i] = c[i - 1] + 1;
		printf("%c\n",c[i-1]);
	}
	return 0;

}