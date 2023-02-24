#include <cstdio>
using namespace std;

int main()
{
    int n, res;
    scanf("%d", &n);
    res = (n / 10 + n % 10) * (n / 10 + n % 10);
    printf("%d", res);
    return 0;
}