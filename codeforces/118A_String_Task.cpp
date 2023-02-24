#include <cstdio>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    char str[105], new_str[205];
    int index = 0;
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
        if (str[i] != 'a' && str[i] != 'o' && str[i] != 'y' && str[i] != 'e' && str[i] != 'u' && str[i] != 'i')
        {
            new_str[index++] = '.';
            new_str[index++] = str[i];
        }
    }
    new_str[index] = '\0';
    printf("%s\n", new_str);
    return 0;
}