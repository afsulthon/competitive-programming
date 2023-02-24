#include <cstdio>
using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    int odd_count = 0;
    while (n > 0)
    {
        if (n % 10 % 2 == 1)
            odd_count++;
        n /= 10;
    }
    printf("%d\n", odd_count);
    return 0;
}