#include <stdio.h>
#include <math.h>
int main()
{
    double s, v;
    double t;
    int mid;
    int min, hour;
    scanf("%lf %lf", &s, &v);
    t = (s / v) + 10.0;
    printf("t=%lf\n", t);
    printf("t=%lf", floor(t));
    mid = floor(t);
    hour = mid / 60;
    min = mid % 60;
    printf("%d,%d,%d,%lf\n", &hour, &min, &mid, &t);
    return 0;
}