#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double x1, y1, x2, y2, x3, y3, a, b, c, s, P, A;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    P = a + b + c;
    s = 0.5 * P;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("%.4lf %.4lf", P, A);
    return 0;
}