#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;

int main()
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        long double a = 0.0, b = 0.0, x, y, res_a, res_b;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%Lf %Lf", &x, &y);
            a += y * 10000;
            b += x * 10000;
        }
        res_a = a / __gcd((ll)a, (ll)b);
        res_b = b / __gcd((ll)a, (ll)b);
        printf("f(x) = %.0Lfx, g(x) = %.0Lfx\n", res_a, res_b);
    }
    return 0;
}