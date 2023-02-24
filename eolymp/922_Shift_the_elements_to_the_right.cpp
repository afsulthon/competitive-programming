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
    printf("%d ", a[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}