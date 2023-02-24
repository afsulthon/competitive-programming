#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[251];
    int count = 0, i = 0;
    scanf("%[^\n]s", s);
    while (s[i] != '\0')
    {
        if (s[i] == '.' && s[i + 1] == ' ')
            count++;
        else if (s[i] == '?' && s[i + 1] == ' ')
            count++;
        else if (s[i] == '!' && s[i + 1] == ' ')
            count++;
        i++;
    }
    printf("%d\n", count + 1);
    return 0;
}