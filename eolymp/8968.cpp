#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    scanf("%d", &arr[0]);
    int max_val = arr[0], min_val = arr[0];
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        max_val = max(max_val, arr[i]);
        min_val = min(min_val, arr[i]);
    }
    max_val /= 2;
    min_val /= 2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            arr[i] -= max_val;
        else if (arr[i] < 0)
            arr[i] -= min_val;
        printf("%d ", arr[i]);
    }
    return 0;
}