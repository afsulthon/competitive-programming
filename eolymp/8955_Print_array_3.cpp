#include <cstdio>
using namespace std;

int main()
{
    int n, a[101], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            count++;
    }
    if (count > 0)
        printf("%d\n", count);
    else
        puts("NO");
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
            printf("%d ", a[i]);
    }
    return 0;
}