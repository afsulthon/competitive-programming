#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    fgets(str, 1005, stdin);
    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
            printf("%c%c", str[i], str[i]);
        else
            printf("%c", str[i]);
    return 0;
}