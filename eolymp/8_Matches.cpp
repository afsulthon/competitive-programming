#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double n, res;
    scanf("%lf", &n);
    res = 2 * n + floor(sqrt(n)) + ceil(n / floor(sqrt(n)));
    printf("%.0lf\n", res);
    return 0;
}