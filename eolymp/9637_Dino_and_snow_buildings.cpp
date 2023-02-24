#include <cstdio>
using namespace std;

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", b - (b - a) * (1 + b - a) / 2);
    return 0;
}