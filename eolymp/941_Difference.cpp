#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n, sum, prod;
    scanf("%d", &n);
    n = abs(n);
    sum = n / 100 + (n / 10) % 10 + n % 10;
    prod = (n / 100) * ((n / 10) % 10) * (n % 10);
    printf("%d", prod - sum);
    return 0;
}