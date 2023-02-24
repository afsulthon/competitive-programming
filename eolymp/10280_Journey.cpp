#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, x_min, x_max;
    scanf("%d", &n);
    int x[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    x_min = x[0];
    x_max = x[0];
    for (int i = 0; i < n; i++)
    {
        x_min = min(x[i], x_min);
        x_max = max(x[i], x_max);
    }
    printf("%d", 2 * abs(x_min - x_max));
    return 0;
}