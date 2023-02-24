#include <cstdio>
#include <cstring>

int main()
{
    char str[250];
    fgets(str, 250, stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == '+' || str[i] == '-' || str[i] == '*'|| str[i] == '/')
            count++;
    printf("%d\n", count);
    return 0;
}