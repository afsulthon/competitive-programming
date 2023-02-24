#include <stdio.h>

int main()
{
    double a;
    scanf("%lf", &a);
    printf("%.10lf\n", 100 / a);
    printf("%.10lf\n", 100 / (100 - a));
    return 0;
}