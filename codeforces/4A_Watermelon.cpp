#include <cstdio>
using namespace std;

int main()
{
    int w, n = 2, even = 0;
    scanf("%d", &w);
    for (int i = w - 2; i > 0; i -= 2)
    {
        if (i % 2 == 0 && n % 2 == 0)
        {
            even++;
            break;
        }
        else
            n += 2;
    }
    if (even == 1)
        puts("YES");
    else
        puts("NO");
    return 0;
}