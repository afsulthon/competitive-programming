#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            for (int j = 0; j < n; j++)
                printf("*");
        else
        {
            if (i % 4 == 1)
            {
                for (int j = 0; j < n - 1; j++)
                    printf(" ");
                printf("*");
            }
            else
            {
                printf("*");
                for (int j = 0; j < n - 1; j++)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}