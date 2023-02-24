#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = n / 100, b = n / 10 % 10, c = n % 10, max = n;
    if (a * 100 + c * 10 + b > max)
        max = a * 100 + c * 10 + b;
    if (b * 100 + a * 10 + c > max)
        max = b * 100 + a * 10 + c;
    if (b * 100 + c * 10 + a > max)
        max = b * 100 + c * 10 + a;
    if (c * 100 + a * 10 + b > max)
        max = c * 100 + a * 10 + b;
    if (c * 100 + b * 10 + a > max)
        max = c * 100 + b * 10 + a;
    printf("%d\n", max * max);
    return 0;
}