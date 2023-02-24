#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a = n / 1000, b = n / 100 % 10, c = n / 10 % 10, d = n % 10;
    if (a == 3 && b == 7 || b == 3 && c == 7 || c == 3 && d == 7)
        puts("YES");
    else
        puts("NO");
    return 0;
}