#include <stdio.h>
int main()
{
    int a = 1;
    for (int i = 0; i < 9; i++)
    {
        a = (a + 1) * 2;
    }
    printf("%d", a);
    return 0;
}
