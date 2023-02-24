#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int m = n, res = 0;
    while (m > 0)
    {
        if (n % m == n / m)
            res++;
        m--;
    }
    printf("%d", res);
    return 0;
}