#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n >= 10)
    {
        if (n % 10 <= n / 10 % 10)
        {
            puts("NO");
            return 0;
        }
        n /= 10;
    }
    puts("YES");
    return 0;
}