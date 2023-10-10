#include <stdio.h>
int main()
{
    char c[4];
    int i;
    i = 0;
    while (i < 5)
    {
        c[i] = getchar();
        i++;
    }
    while (i > 0)
    {
        --i;
        printf("c[%d]=%c\n", i, c[i]);
    }
    return 0;
}