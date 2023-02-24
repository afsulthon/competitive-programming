#include <cstdio>
using namespace std;

int main()
{
    int nums[100002];
    int n, k, val, hi = -1;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if (val >= 0)
        {
            nums[val]++;
            if (val > hi)
                hi = val;
        }
    }
    for (int i = hi; i >= 0; i--)
        if (0 <= nums[i] && nums[i] <= k)
            while (nums[i]--)
                printf("%d ", i);
    puts("");
    return 0;
}