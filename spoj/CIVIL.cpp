#include <cstdio>
#include <cmath>
#define ld long double
using namespace std;

int main()
{
    ld h, w, f;
    while (true)
    {
        scanf("%Lf %Lf %Lf", &h, &w, &f);
        if (h == 0 && w == 0 && f == 0)
            break;
        ld res = (f * f - 1) * (w * w) / (16 * h);
        printf("%.3Lf\n", res);
    }
    return 0;
}