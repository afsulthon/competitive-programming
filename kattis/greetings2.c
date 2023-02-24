#include <stdio.h>
#include <string.h>

int main()
{
    char s[1005];
    scanf("%s", s);
    int count = strlen(s) - 2;
    printf("h");
    for (int i = 0; i < 2 * count; i++)
        printf("e");
    printf("y\n");
    return 0;
}