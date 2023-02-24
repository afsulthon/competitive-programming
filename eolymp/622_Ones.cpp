#include <cstdio>
using namespace std;

int main()
{
    int n, count = 0;
    scanf("%d", &n);
    for (int i = 0; n > 0; i++)
    {
        if (n % 2 == 1)
            count++;
        n /= 2;
    }
    printf("%d\n", count);
    return 0;
}