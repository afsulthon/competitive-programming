#include <cstdio>
using namespace std;

int main()
{
    int e, f, c, count = 0;
    scanf("%d %d %d", &e, &f, &c);
    int empty = e + f;
    while (empty >= c)
    {
        count += empty / c;
        empty = empty / c + empty % c;
    }
    printf("%d\n", count);
    return 0;
}