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
        if (a[i] > a[i - 1])
            printf("%d ", a[i]);
    }
    return 0;
}