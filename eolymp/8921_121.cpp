#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n)
    {
        int x = n % 10;
        printf("%d\n", x);
        n /= 10;
    }
    return 0;
}