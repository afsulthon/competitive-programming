#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, d, f, s1, s2, A1, A2;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &f);
    s1 = 0.5 * (a + b + f);
    s2 = 0.5 * (c + d + f);
    A1 = sqrt(s1 * (s1 - a) * (s1 - b) * (s1 - f));
    A2 = sqrt(s2 * (s2 - c) * (s2 - d) * (s2 - f));
    printf("%.4lf\n", A1 + A2);
    return 0;
}