#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int digits;
    if (n == 0)
        digits = 1;
    else
        digits = (int)log10(abs(n)) + 1;
    printf("%d\n", digits);
    return 0;
}