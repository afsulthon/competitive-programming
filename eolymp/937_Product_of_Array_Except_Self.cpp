#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n], product = 1;
    int zero_count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        if (arr[i] == 0)
            zero_count++;
        else
            product *= arr[i];
    }

    if (zero_count > 1)
        for (int i = 0; i < n; i++)
            printf("0 ");
    else if (zero_count == 1)
        for (int i = 0; i < n; i++)
            if (arr[i] != 0)
                printf("0 ");
            else
                printf("%lld ", product);
    else
        for (int i = 0; i < n; i++)
            printf("%lld ", product / arr[i]);
            
    return 0;
}