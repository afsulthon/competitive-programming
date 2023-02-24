#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 10 == n / 1000 && n / 10 % 10 == n / 100 % 10)
        puts("YES");
    else
        puts("NO");
    return 0;
}