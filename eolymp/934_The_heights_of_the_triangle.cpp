#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, s, ha, hb, hc;
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b + c) / 2;
    ha = sqrt(s * (s - a) * (s - b) * (s - c)) * (2 / a);
    hb = sqrt(s * (s - a) * (s - b) * (s - c)) * (2 / b);
    hc = sqrt(s * (s - a) * (s - b) * (s - c)) * (2 / c);
    printf("%.2lf %.2lf %.2lf", ha, hb, hc);
    return 0;
}