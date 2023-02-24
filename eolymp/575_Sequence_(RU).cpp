#include <cstdio>
using namespace std;

int main()
{
    int k;
    scanf("%d", &k);
    if (k >= 1 && k <= 3)
        printf("%d\n", k);
    else if (k > 3)
        printf("%d\n", 3 + 3 * (k - 3));
    return 0;
}