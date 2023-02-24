#include <cstdio>
using namespace std;

int main()
{
    long long h, w, l, k;
    scanf("%lld %lld %lld %lld", &h, &w, &l, &k);
    if (h * w * l % k == 0)
        printf("%lld\n", (h * w * l) / k);
    else
        printf("%lld\n", (h * w * l) / k + 1);
    return 0;
}