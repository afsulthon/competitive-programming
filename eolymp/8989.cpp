#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    fgets(str, 1005, stdin);
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == 'a')
            printf("aa");
        else
            printf("%c", str[i]);
    return 0;
}