#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++)
    {
        if (i & 1 == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}