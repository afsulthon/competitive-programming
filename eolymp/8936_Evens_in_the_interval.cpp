#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = b; i >= a; i--)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}