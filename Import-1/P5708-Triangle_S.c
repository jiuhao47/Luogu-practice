#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, p, s;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2.0;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    // s = round(s * 10) / 10;
    printf("%.1lf", s);
    return 0;
}

// double 与 float 的精度区别