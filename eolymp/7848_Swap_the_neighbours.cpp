#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int m = n;
    if (n % 2 != 0)
        m--;
    for (int i = 0; i < m; i++)
    {
        printf("%d %d ", a[i + 1], a[i]);
        i++;
    }
    if (n % 2 != 0)
        printf("%d\n", a[n - 1]);
    return 0;
}