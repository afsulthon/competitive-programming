#include <cstdio>
using namespace std;

int main()
{
    int n, a[3], res = 0;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d %d", &a[0], &a[1], &a[2]);
        if (a[0] + a[1] + a[2] >= 2)
            res++;
    }
    printf("%d", res);
    return 0;
}