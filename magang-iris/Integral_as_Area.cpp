#include <cstdio>
using namespace std;

double f(double x)
{
    return -4.0 / 5.0 * x * x + 3.0 * x - 2;
}

int main()
{
    // function: -4/5x^2 + 3x - 2
    double p, q, area = 0;
    scanf("%lf %lf", &p, &q);
    const double length = 0.001;
    for (double x = p; x < q; x += length)
    {
        area += f(x) * length;
    }
    printf("%.4lf", area);
    return 0;
}