#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], nums[n];
    int m = 0;
    bool exist = false;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        for (int j = 0; j <= m; j++)
            if (nums[j] == arr[i])
            {
                exist = true;
                break;
            }
        if (!exist)
        {
            nums[m] = arr[i];
            m++;
        }
        exist = false;
    }
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == nums[i])
                count++;
        }
        if (count > n / 2)
        {
            printf("%d\n", nums[i]);
            return 0;
        }
        count = 0;
    }
    puts("-1");
    return 0;
}