#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    n = n % 10 + (n / 10) % 10 + n / 100;
    double res = sqrt(n);
    printf("%.3lf\n", res);
    return 0;
}