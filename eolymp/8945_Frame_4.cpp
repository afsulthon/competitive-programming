#include <cstdio>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
            for (int j = 0; j < m; j++)
                printf("*");
        else
        {
            for (int j = 0; j < m; j++)
            {
                if (j == 0 || j == m - 1)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}