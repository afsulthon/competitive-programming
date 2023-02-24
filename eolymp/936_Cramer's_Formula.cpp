#include <cstdio>
using namespace std;

int main()
{
    double a1, b1, c1, a2, b2, c2, x1, x2;
    scanf("%lf %lf %lf", &a1, &b1, &c1);
    scanf("%lf %lf %lf", &a2, &b2, &c2);
    x1 = (c1 * b2 - b1 * c2) / (a1 * b2 - b1 * a2);
    x2 = (a1 * c2 - c1 * a2) / (a1 * b2 - b1 * a2);
    printf("%.3lf\n%.3lf", x1, x2);
    return 0;
}