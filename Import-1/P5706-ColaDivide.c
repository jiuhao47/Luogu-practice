#include <stdio.h>
int main()
{
    double a;
    int b;
    scanf("%lf %d\n", &a, &b);
    printf("%.3lf\n", a / b);
    printf("%d", b * 2);
    return 0;
}
