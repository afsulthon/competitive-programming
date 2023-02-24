#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d ", arr[0]);
    for (int i = 1; i < n; i++)
        printf("%d ", arr[i] - arr[i - 1]);
    return 0;
}