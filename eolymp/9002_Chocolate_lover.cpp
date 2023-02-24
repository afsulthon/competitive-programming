#include <cstdio>
#define ll long long
using namespace std;

int main()
{
    ll n, a, b, res;
    scanf("%lld %lld %lld", &n, &a, &b);
    if (n % 2 == 0)
        res = a * (n / 2) + b * (n / 2);
    else
        res = a * (n / 2) + b * (n / 2) + (a > b ? a : b);
    printf("%lld\n", res);
    return 0;
}