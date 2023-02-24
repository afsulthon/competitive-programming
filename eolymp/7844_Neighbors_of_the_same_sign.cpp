#include <cstdio>
using namespace std;

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++)
    {
        if (a[i] < 0 && a[i - 1] < 0)
            printf("%d %d\n", a[i - 1], a[i]);
        if (a[i] > 0 && a[i - 1] > 0)
            printf("%d %d\n", a[i - 1], a[i]);
    }
    return 0;
}