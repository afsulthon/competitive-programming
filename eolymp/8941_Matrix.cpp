#include <cstdio>
using namespace std;

int main()
{
    int n, m, number = 0;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            number++;
            printf("%d ", number);
        }
        printf("\n");
    }
    return 0;
}