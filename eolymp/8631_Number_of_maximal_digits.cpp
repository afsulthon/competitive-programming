#include <cstdio>
using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    int arr[10] = {0};
    long long max = n % 10;
    arr[max]++;
    n /= 10;
    while (n > 0)
    {
        if (n % 10 > max)
        {
            max = n % 10;
            arr[max]++;
        }
        else if (n % 10 == max)
            arr[max]++;
        n /= 10;
    }
    printf("%d\n", arr[max]);
    return 0;
}