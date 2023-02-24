#include <cstdio>
using namespace std;

int main()
{
    int n, a[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i % 2 == 0)
            printf("%d ", a[i]);
    }
    return 0;
}