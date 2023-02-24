#include <cstdio>
#include <cstring>
using namespace std;

int n;
char s[105];

int main()
{
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", s);
        if (strlen(s) > 10)
        {
            printf("%c%d%c\n", s[0], strlen(s) - 2, s[strlen(s) - 1]);
        }
        else
            printf("%s\n", s);
    }
    return 0;
}