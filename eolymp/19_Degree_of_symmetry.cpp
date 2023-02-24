#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    char n[15];
    scanf("%s", n);
    int i = ceil((double)strlen(n) / 2), DOS = 0, a = 0, b = strlen(n) - 1;
    while (i--)
    {
        if (n[a] == n[b])
            DOS++;
        a++;
        b--;
    }
    printf("%d\n", DOS);
    return 0;
}