#include<stdio.h>
#include<string.h>
#define NAME "GIgATHINK, INC."
#define ADDRESS "101 Megabuck plaza"
#define PLACE "Megapolis, CA  94904"
#define WIDTH 40
#define SPACE ' '
void show_n_char(char ch, int num);
int main()
{
	int spaces;
	show_n_char('*', WIDTH);
	putchar('\n');
	show_n_char(SPACE, 12);
	printf("%s\n",NAME);
	spaces = (WIDTH - strlen(ADDRESS));
	show_n_char(SPACE,spaces);
	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);
	putchar("\n");
	return 0;
}
void show_n_char(char ch, int num)
{
	int count;
	for (count = 1; count <= num; count++)
		putchar(ch);
}