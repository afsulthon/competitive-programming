#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    n = abs(n);
    printf("%d\n%d\n%d\n", n / 100, (n / 10) % 10, n % 10);
    return 0;
}