#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int res = 1;
    while (n)
    {
        if (n % 10 % 2 != 0)
            res *= (n % 10);
        n /= 10;
    }
    if (res == 1)
        puts("-1");
    else
        printf("%d\n", res);
    return 0;
}