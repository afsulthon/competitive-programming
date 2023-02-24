#include <cstdio>
#include <algorithm>
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
    int min_val = arr[0], max_val = arr[0];
    for (int i = 0; i < n; i++)
    {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }
    printf("%d\n", max_val - min_val);
    return 0;
}