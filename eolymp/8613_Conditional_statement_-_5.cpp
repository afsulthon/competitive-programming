#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long long x;
    scanf("%lld", &x);
    long long y;
    if (x >= 13)
        y = 3 * pow(x, 3) + 4 * pow(x, 2) + 5 * x + 6;
    else
        y = 3 * pow(x, 3) - 2 * pow(x, 2) - 3 * x - 4;
    printf("%lld\n", y);
    return 0;
}