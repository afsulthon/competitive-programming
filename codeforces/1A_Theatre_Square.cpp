#include <cstdio>
#include <cmath>
#define ll long long
using namespace std;

int main()
{
    ll n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    ll res = ceil((double)n / (double)a) * ceil((double)m / (double)a);
    printf("%lld\n", res);
    return 0;
}