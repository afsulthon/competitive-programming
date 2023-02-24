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
    int min_val = arr[0], max_val = arr[0], sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_val)
            min_val = arr[i];
        if (arr[i] > max_val)
            max_val = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > min_val && arr[i] < max_val)
            sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}