#include <cstdio>
using namespace std;

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    printf("%.4lf\n", a + b);
    printf("%.4lf\n", a + b + c);
    printf("%.4lf\n", a + b + c + d);
    return 0;
}