#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int x1, x2, x3, x4, y1, y2, y3, y4, z1, z2, z3, z4, a, b, c, d, e, f;
    double p1, p2, p3, p4, s1, s2, s3, s4, s;
    // find the area of triangular pyramid
    scanf("%d %d %d", &x1, &y1, &z1);
    scanf("%d %d %d", &x2, &y2, &z2);
    scanf("%d %d %d", &x3, &y3, &z3);
    scanf("%d %d %d", &x4, &y4, &z4);
    p1 = (x1 * y2 - x2 * y1) * z3 + (x2 * y3 - x3 * y2) * z1 + (x3 * y1 - x1 * y3) * z2;
    p2 = (x1 * y3 - x3 * y1) * z2 + (x3 * y2 - x2 * y3) * z1 + (x2 * y1 - x1 * y2) * z3;
    p3 = (x1 * y4 - x4 * y1) * z3 + (x4 * y2 - x2 * y4) * z1 + (x2 * y1 - x1 * y2) * z4;
    p4 = (x1 * y2 - x2 * y1) * z4 + (x2 * y3 - x3 * y2) * z1 + (x3 * y1 - x1 * y3) * z2;
    s1 = sqrt(p1 * p1 + p2 * p2 + p3 * p3);
    s2 = sqrt(p4 * p4 + p2 * p2 + p3 * p3);
    s3 = sqrt(p1 * p1 + p4 * p4 + p3 * p3);
    s4 = sqrt(p1 * p1 + p2 * p2 + p4 * p4);
    s = (s1 + s2 + s3 + s4) / 2;
    a = sqrt(s * (s - s1) * (s - s2) * (s - s3) * (s - s4));
    printf("%d\n", s);
}