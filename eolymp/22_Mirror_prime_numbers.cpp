#include <cstdio>
#include <cmath>
using namespace std;

bool isPrime (int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int mirror_num (int n)
{
    int mirror = 0;
    while (n)
    {
        mirror = mirror * 10 + n % 10;
        n /= 10;
    }
    return mirror;
}

int main()
{
    int a, b, mirror_primes = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
        if (isPrime(i) && isPrime(mirror_num(i)))
            mirror_primes++;
    printf("%d\n", mirror_primes);
    return 0;
}