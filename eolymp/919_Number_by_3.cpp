#include <cstdio>
using namespace std;

int main()
{
    int n, total = 0;
    scanf("%d", &n);
    float a, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%f", &a);
        if (i % 3 == 0 && a > 0)
        {
            sum += a;
            total++;
        }
    }
    printf("%d %.2f", total, sum);
    return 0;
}