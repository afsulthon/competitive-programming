#include <cstdio>
using namespace std;

int f(int n)
{
    if (n == 0)
        return 0;
    return f(n - 1) + n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", f(n));
    return 0;
}