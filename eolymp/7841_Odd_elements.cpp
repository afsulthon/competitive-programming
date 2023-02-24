#include <cstdio>
using namespace std;

int main()
{
    int n, a;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        if (a % 2 != 0)
            printf("%d ", a);
    }
    return 0;
}