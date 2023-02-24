#include <cstdio>
using namespace std;

int main()
{
    int n, repeat = 0;
    scanf("%d", &n);
    while (n)
    {
        repeat++;
        n /= 10;
        n *= 9;
        printf("%d\n", n);
    }
    printf("%d\n", repeat);
    return 0;
}