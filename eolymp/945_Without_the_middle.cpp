#include <cstdio>
using namespace std;

int main()
{
    int n, res;
    scanf("%d", &n);
    res = (n / 100) * 10 + n % 10;
    printf("%d\n", res);
    return 0;
}