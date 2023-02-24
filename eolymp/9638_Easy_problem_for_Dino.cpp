#include <cstdio>
using namespace std;

int main()
{
    long long a, b;
    scanf("%lld %lld", &a, &b);
    long long sum = a + b;
    if (sum % 2 == 0)
        printf("%lld", sum / 2);
    else
        puts("-");
    return 0;
}