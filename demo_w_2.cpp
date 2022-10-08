#include<stdio.h>
#define NAME "GIGATHINK,INC"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define  WIDTH 40
void starbar(void);
int main(void)
//{
//	int ch;
//	for (ch = 'a'; ch <= 'z'; ch++) {
//		printf("The ASCLL value for %c is %d.\n",ch,ch);
//	}
//	return 0;
//}
{
	starbar();
	printf("%s\n",NAME);
	printf("%s\n",ADDRESS);
	printf("%s\n",PLACE);
	starbar();
	return 0;
}
void starbar(void)
{
	int count;
	for (count = 1; count <= WIDTH; count++) {
		putchar('*');
		putchar('\n');
	
	}
}