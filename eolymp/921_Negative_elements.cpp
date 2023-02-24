#include <cstdio>
using namespace std;

int main()
{
    int n, total = 0;
    scanf("%d", &n);
    double x, res = 0;
    while (n--)
    {
        scanf("%lf", &x);
        if (x < 0.0)
        {
            res += x;
            total++;
        }
    }
    printf("%d %.2lf", total, res);
    return 0;
}