#include <cstdio>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int m, n, primeCount = 0;
    scanf("%d %d", &m, &n);
    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d\n", i);
            primeCount++;
        }
    }
    if (primeCount == 0)
        puts("Absent");
    return 0;
}