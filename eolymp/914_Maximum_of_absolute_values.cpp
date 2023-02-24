#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double a[102];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &a[i]);
        a[i] = abs(a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[0])
            a[0] = a[i];
    }
    printf("%.2lf", a[0]);
    return 0;
}