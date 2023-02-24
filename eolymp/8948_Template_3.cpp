#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = 0; int b = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == a || j == b)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        a++;
        b--;
    }
    return 0;
}