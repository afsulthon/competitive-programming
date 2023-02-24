#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int x;
    scanf("%d", &x);
    int y;
    if (x >= 0)
        y = pow(x, 3) + 2 * pow(x, 2) + 4 * x - 6;
    else
        y = pow(x, 3) - 7 * x;
    printf("%d\n", y);
    return 0;
}