#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    fgets(str, 1005, stdin);
    char recent = '\0';
    for (int i = 0; i < strlen(str); i++)
        if (str[i] != recent)
        {
            printf("%c", str[i]);
            recent = str[i];
        }
    return 0;
}