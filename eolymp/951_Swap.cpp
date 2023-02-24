#include <cstdio>
using namespace std;

int main()
{
    int n, res;
    scanf("%d", &n);
    res = n % 10 + (n / 100) % 10 * 10 + (n / 10) % 10 * 100 + (n / 1000) * 1000;
    printf("%d\n", res);
    return 0;
}