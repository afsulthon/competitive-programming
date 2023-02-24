#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, k = 2;
    scanf("%d", &n);
    while (n > 1)
    {
        if (k > sqrt(n))
        {
            printf("%d\n", n);
            break;
        }
        if (n % k == 0)
        {
            printf("%d\n", k);
            n /= k;
        }
        else
            k++;
    }
    return 0;
}