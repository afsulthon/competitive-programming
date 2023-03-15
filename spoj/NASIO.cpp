#include <cstdio>
using namespace std;

int main()
{
    int t;
    char o;
    long long int a, b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%lld %c %lld", &a, &o, &b);
        if (o == '+')
            printf("%lld\n", ((a * 11ll) + (b * 13ll)) + 17ll);
        else if (o == '-')
            printf("%lld\n", ((a * 11ll) - (b * 13ll)) + 17ll);
        else if (o == '*')
            printf("%lld\n", ((a * 11ll) * (b * 13ll)) + 17ll);
        else if (o == '/')
            printf("%.6lf\n", ((double)(a * 11ll) / (b * 13ll)) + 17.0);
    }
    return 0;
}