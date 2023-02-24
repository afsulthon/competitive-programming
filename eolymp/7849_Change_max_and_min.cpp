#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0], max = arr[0], min_index, max_index;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)
            printf("%d ", min);
        else if (arr[i] == min)
            printf("%d ", max);
        else
            printf("%d ", arr[i]);
    }
    return 0;
}