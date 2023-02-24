#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int res = 0;
    while (n)
    {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    printf("%d\n", res);
    return 0;
}