#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int count = 0;
    char s[503];
    scanf("%s", &s);
    for (int i = 1; i < strlen(s); i++)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*')
            count++;
    }
    printf("%d", count);
    return 0;
}