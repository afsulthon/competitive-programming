#include <cstdio>
using namespace std;

int main()
{
    double x1, y1, x2, y2, a, x, y;
    scanf("%lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &a);
    x = (x2 - x1) / (1 / a + 1) + x1;
    y = (y2 - y1) / (1 / a + 1) + y1;
    printf("%.2lf %.2lf\n", x, y);
    return 0;
}