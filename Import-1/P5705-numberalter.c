#include <stdio.h>
int main()
{
    char c[5];
    int i;
    i = 0;
    while (i < 5)
    {
        c[i] = getchar();
        i++;
    }
    while (i > 0)
    {
        i--;
        printf("%c", c[i]);
    }

    return 0;
}