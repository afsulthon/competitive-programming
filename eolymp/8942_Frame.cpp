#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        if (i == 0 || i == 2)
        {
            for (int j = 0; j < n; j++)
                printf("*");
        }
        else
        {
            printf("*");
            for (int j = 1; j < n - 1; j++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }
    return 0;
}