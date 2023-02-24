#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = n / 100, b = n / 10 % 10, c = n % 10;
    int max = a * 10 + b;
    if (a * 10 + c > max)
        max = a * 10 + c;
    if (b * 10 + c > max)
        max = b * 10 + c;
    printf("%d\n", max);
    return 0;
}