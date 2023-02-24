#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, max_val = -100;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        max_val = max(max_val, arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == max_val)
            swap(arr[n - 1], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}