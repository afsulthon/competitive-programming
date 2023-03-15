#include <cstdio>
using namespace std;

int main()
{
    int t;
    double n;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lf", &n);
        printf("%.11lf\n", 2.0 / 3.0 + 1.0 / 12.0 - 1.0 / 2.0 * (1.0 / ((n + 1) * (n + 2))));
    }
    return 0;
}