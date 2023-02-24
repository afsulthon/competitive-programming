#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int k, n, res;
    scanf("%d %d", &k, &n);
    res = pow(2, k) + pow(2, n);
    printf("%d\n", res);
    return 0;
}