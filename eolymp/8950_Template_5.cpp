#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 == 0)
        return 0;
    int a = 1, b = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= a || j >= b)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if (i < (n + 1) / 2)
        {
            a++;
            b--;
        }
        else
        {
            a--;
            b++;
        }
    }
    return 0;
}