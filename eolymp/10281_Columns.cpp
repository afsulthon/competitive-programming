#include <cstdio>
#include <algorithm>
using namespace std;

int n, height, ans;

int main()
{
    scanf("%d", &n);
    ans = n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &height);
        ans = max(height, ans);
    }
    printf("%d\n", ans);
    return 0;
}