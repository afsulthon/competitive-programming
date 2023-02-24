#include <cstdio>
using namespace std;

int main()
{
    int x, a, b;
    scanf("%d %d %d", &x, &a, &b);
    if (x >= a && x <= b)
        puts("IN");
    else
        puts("OUT");
    return 0;
}