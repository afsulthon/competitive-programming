#include <cstdio>
using namespace std;

int main()
{
    int x;
    scanf("%d", &x);
    if (x > 0)
        puts("1");
    else if (x < 0)
        puts("-1");
    else
        puts("0");
    return 0;
}