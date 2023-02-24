#include <cstdio>
using namespace std;

int main()
{
    char s[5];
    scanf("%s", s);
    if (s[0] == s[1] && s[1] == s[2])
    {
        if (s[1] != s[2])
            puts("YES");
        else
            puts("NO");
    }
    else if (s[0] == s[3] && s[1] == s[2])
    {
        if (s[0] != s[1])
            puts("YES");
        else
            puts("NO");
    }
    else if (s[0] == s[2] && s[1] == s[3])
    {
        if (s[0] != s[1])
            puts("YES");
        else
            puts("NO");
    }
    else
        puts("NO");
    return 0;
}