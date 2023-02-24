#include <cstdio>
#include <cstring>

int main()
{
    char str[250];
    fgets(str, 250, stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] >= 48 && str[i] <= 57)
            count++;
    printf("%d\n", count);
    return 0;
}