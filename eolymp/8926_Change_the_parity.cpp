#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int res = 0, x = 1;
    while (n)
    {
        if (n % 10 % 2 == 0)
            res += (n % 10 + 1) * x;
        else
            res += (n % 10 - 1) * x;
        n /= 10;
        x *= 10;
    }
    printf("%d\n", res);
    return 0;
}