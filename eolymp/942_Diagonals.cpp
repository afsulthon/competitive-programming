#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double Ax, Ay, Bx, By, Cx, Cy, Dx, Dy, Ox, Oy, D1, D2;
    scanf("%lf %lf", &Ax, &Ay);
    scanf("%lf %lf", &Bx, &By);
    scanf("%lf %lf", &Cx, &Cy);
    scanf("%lf %lf", &Dx, &Dy);
    Ox = ((Ax + Bx) / 2.0 + (Cx + Dx) / 2.0) / 2.0;
    Oy = ((Ay + Dy) / 2.0 + (By + Cy) / 2.0) / 2.0;
    D1 = sqrt(pow(Ax - Cx, 2.0) + pow(Ay - Cy, 2.0));
    D2 = sqrt(pow(Bx - Dx, 2.0) + pow(By - Dy, 2.0));
    printf("%.3lf %.3lf\n", Ox, Oy);
    printf("%.3lf %.3lf\n", D1, D2);
    return 0;
}