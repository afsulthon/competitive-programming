#include <cstdio>
using namespace std;

int main()
{
    int n, digit, sum = 0;
    double prod = 1, res;
    scanf("%d", &n);
    while (n > 0)
    {
        digit = n % 10;
        sum += digit;
        prod *= digit;
        n /= 10;
    }
    printf("%.3lf", prod / sum);
    return 0;
}