#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], min_val = 100000000, max_val = -100000000;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i] - max_val + min_val);
    }
    return 0;
}