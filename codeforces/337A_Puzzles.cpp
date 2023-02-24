#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, f[1005], least;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &f[i]);
    }
    sort(f, f + m);
    least = f[n - 1] - f[0];
    for (int i = 0; i <= m - n; i++)
    {
        if (f[i + n - 1] - f[i] < least)
            least = f[i + n - 1] - f[i];
    }
    printf("%d\n", least);
    return 0;
}