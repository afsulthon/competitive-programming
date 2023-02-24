#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n == 1)
        puts("NO");
    else
    {
        printf("%d\n", n / 2);
        for (int i = 1; i < n; i += 2)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}