#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    double num, min = 100.00;
    while (n--)
    {
        scanf("%lf", &num);
        if (num < min)
            min = num;
    }
    printf("%.2lf\n", min * 2);
    return 0;
}