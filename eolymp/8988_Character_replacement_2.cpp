#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    fgets(str, 1005, stdin);
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == 'a' && str[i + 1] == 'b')
        {
            printf("ups");
            i++;
        }
        else
            printf("%c", str[i]);
    return 0;
}