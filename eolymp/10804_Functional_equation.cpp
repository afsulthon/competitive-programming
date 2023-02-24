#include <cstdio>
using namespace std;

int main()
{
    double x;
    scanf("%lf", &x);
    if (x != 0)
        printf("%.4lf", (2.0 * x - 1.0 / x) / 3.0);
    return 0;
}