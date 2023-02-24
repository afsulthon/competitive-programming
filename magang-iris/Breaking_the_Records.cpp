#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }
    int max = scores[0], min = scores[0], maxCount = 0, minCount = 0;
    for (int i = 1; i < n; i++)
    {
        if (scores[i] > max)
        {
            max = scores[i];
            maxCount++;
        }
        if (scores[i] < min)
        {
            min = scores[i];
            minCount++;
        }
    }
    printf("%d %d", maxCount, minCount);
    return 0;
}