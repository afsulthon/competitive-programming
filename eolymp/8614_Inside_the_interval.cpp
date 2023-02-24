#include <cstdio>
using namespace std;

int main()
{
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    if (x >= a && x <= b)
        puts("YES");
    else
        puts("NO");
    return 0;
}