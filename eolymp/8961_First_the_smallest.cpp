#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n, min_val = 100;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        min_val = min(min_val, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min_val)
            swap(arr[0], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}