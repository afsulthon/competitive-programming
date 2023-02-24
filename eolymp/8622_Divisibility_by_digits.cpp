#include <cstdio>
using namespace std;

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a = n / 1000;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    if (a == 0 || b == 0 || c == 0 || d == 0)
        puts("NO");
    else if (n % a == 0 && n % b == 0 && n % c == 0 && n % d == 0)
        puts("YES");
    else
        puts("NO");
    return 0;
}