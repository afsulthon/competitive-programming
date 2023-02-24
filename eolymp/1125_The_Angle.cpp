#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int h, m;
    double deg;
    while (scanf("%d %d", &h, &m))
    {
        if (h == 0 && m == 0)
            break;
        else
        {
            deg = abs((h % 12 + (double)m / 60.0) * 30.0 - m * 6.0);
            if (deg > 180.0)
                deg = 360.0 - deg;
            if (m == 0)
                printf("At %d:%d0 the angle is %.1lf degrees.\n", h, m, deg);
            else if (m > 0 && m < 10)
                printf("At %d:0%d the angle is %.1lf degrees.\n", h, m, deg);
            else
                printf("At %d:%d the angle is %.1lf degrees.\n", h, m, deg);
        }
    }
    return 0;
}