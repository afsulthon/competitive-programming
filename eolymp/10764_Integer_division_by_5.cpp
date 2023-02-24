#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    n %= 5;
    if (n == 0)
        puts("0");
    else if (n == 1 || n == 4)
        puts("1");
    else
        puts("2");
    return 0;
}