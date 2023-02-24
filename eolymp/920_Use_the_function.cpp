#include <cstdio>
using namespace std;

double max(double a, double b)
{
    return a > b ? a : b;
}

double min(double a, double b, double c)
{
    double res = a;
    if (b < res)
        res = b;
    if (c < res)
        res = c;
    return res;
}

int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("%.2lf\n", min(max(x, y), max(y, z), x + y + z));
    return 0;
}