#include <cstdio>
using namespace std;

int main()
{
    int n, sum = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i * 2;
    printf("%d", sum);
    return 0;
}