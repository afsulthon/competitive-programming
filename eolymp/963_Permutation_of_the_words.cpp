#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[100];
    gets(s);
    int space;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == ' ')
            space = i;
    }
    for (int i = space + 1; i < strlen(s); i++)
        printf("%c", s[i]);
    printf(" ");
    for (int i = 0; i < space; i++)
        printf("%c", s[i]);
    return 0;
}