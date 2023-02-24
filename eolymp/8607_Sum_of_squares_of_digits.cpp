#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = pow(n / 1000, 2) + pow(n / 100 % 10, 2) + pow(n / 10 % 10, 2) + pow(n % 10, 2);
    printf("%d\n", sum);
    return 0;
}