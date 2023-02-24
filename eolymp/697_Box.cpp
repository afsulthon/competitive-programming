#include <cstdio>
using namespace std;

int main()
{
    int n;
    double a, b;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%lf", &a);
        b = a / 6;
        printf("%.10lf\n", b);
    }
    return 0;
}