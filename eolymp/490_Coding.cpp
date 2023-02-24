#include <cstdio>
#include <cstring>

int main()
{
    char s[105];
    scanf("%s", s);
    char res[strlen(s)];
    res[0] = s[0];
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == s[i - 1])
            res[i] = '0';
        else
            res[i] = '1';
    }
    for (int i = 0; i < strlen(s); i++)
        printf("%c", res[i]);
    return 0;
}