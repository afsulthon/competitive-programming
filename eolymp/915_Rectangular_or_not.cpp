#include <cstdio>
using namespace std;

int main()
{
    long long a, b, c, biggest;
    scanf("%lld %lld %lld", &a, &b, &c);

    if (a - b > 0)
        biggest = a;
    else if (b - a > 0)
        biggest = b;
    if (biggest - c > 0)
        biggest = biggest;
    else if (c - biggest > 0)
        biggest = c;

    if (a == biggest)
    {
        if (a * a == b * b + c * c)
            puts("YES");
        else
            puts("NO");
    }
    else if (b == biggest)
    {
        if (b * b == a * a + c * c)
            puts("YES");
        else
            puts("NO");
    }
    else if (c == biggest)
    {
        if (c * c == a * a + b * b)
            puts("YES");
        else
            puts("NO");
    }
    else
        puts("NO");

    return 0;
}