#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            count++;
    }
    if (count > 0)
    {
        printf("%d\n", count);
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] % 2 == 0)
                printf("%d ", arr[i]);
        }
    }
    else
        puts("NO");
    return 0;
}