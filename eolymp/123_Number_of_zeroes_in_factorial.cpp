#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    long long n, k = 1, res = 0;
    scanf("%lld", &n);
    while (pow(5, k) <= n)
    {
        res = res + n / pow(5, k);
        k++;
    }
    printf("%lld\n", res);
    return 0;
}