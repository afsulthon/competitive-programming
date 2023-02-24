#include <cstdio>
using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    long long max = n % 10;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 > max)
            max = n % 10;
        n /= 10;
    }
    printf("%lld\n", max);
    return 0;
}