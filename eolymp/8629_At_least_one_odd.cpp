#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        if (n % 10 % 2 != 0)
        {
            puts("YES");
            return 0;
        }
        n /= 10;
    }
    puts("NO");
    return 0;
}