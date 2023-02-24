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
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            if (arr[j] == arr[i])
            {
                flag = true;
                break;
            }
        }
        if (!flag)
            printf("%d ", arr[i]);
    }
    return 0;
}