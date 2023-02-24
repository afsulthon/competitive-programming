#include <cstdio>
using namespace std;

int main()
{
    int a, m, n = 1;
    scanf("%d %d", &a, &m);
    while (m > 2 * a)
    {
        m -= a;
        a++;
        n++;
    }
    if (n == 1)
        printf("2\n");
    else
        printf("%d\n", n);
    return 0;
}