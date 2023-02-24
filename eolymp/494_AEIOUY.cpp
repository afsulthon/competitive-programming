#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[105];
    int count = 0;
    scanf("%[^\n]s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
            count++;
    }
    printf("%d", count);
    return 0;
}