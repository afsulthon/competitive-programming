#include <cstdio>
using namespace std;

int main()
{
    int n, a[101], counter = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            counter++;
    }
    printf("%d\n", counter);
    return 0;
}