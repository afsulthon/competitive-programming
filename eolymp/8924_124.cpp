#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int res = 0, count = 0;
    while (n)
    {
        if (n % 10 % 2 == 0)
        {
            res += (n % 10);
            count++;
        }
        n /= 10;
    }
    if (count == 0)
        puts("-1");
    else
        printf("%d\n", res);
    return 0;
}