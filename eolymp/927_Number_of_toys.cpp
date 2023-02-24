#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a, sum = 0;
    double b;
    while (n--)
    {
        scanf("%d %lf", &a, &b);
        if (b < 50.00)
            sum += a;
    }
    printf("%d", sum);
    return 0;
}