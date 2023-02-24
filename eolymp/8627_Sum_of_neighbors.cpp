#include <cstdio>
using namespace std;

int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("%d %d %d %d %d\n", a, a + c, b + d, c + e, e);
    return 0;
}