#include <cstdio>
using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
        printf("%d %d\n", 4 * n, n * n);
    return 0;
}