#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[205];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == '.' || str[i] == '!' || str[i] == '?')
            count++;
    printf("%d\n", count);
    return 0;
}