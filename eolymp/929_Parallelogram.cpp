#include <cstdio>
using namespace std;

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    if (a == b && c == d)
        puts("YES");
    else if (a == c && b == d)
        puts("YES");
    else if (a == d && b == c)
        puts("YES");
    else if (a == b && b == c && c == d)
        puts("YES");
    else
        puts("NO");
    return 0;
}