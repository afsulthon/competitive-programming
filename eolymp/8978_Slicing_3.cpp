#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[205];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    printf("%c%c%c\n", str[1], str[3], str[9]);
    printf("%c%c%c\n", str[0], str[1], str[len - 2]);
    for (int i = len - 6; i < len - 1; i++)
        printf("%c", str[i]);
    printf("\n");
    for (int i = 0; i < len - 5; i++)
        printf("%c", str[i]);
    printf("\n");
    int prev_len = 0;
    for (int i = 0; i < len - 1; i += 2)
    {
        printf("%c", str[i]);
        prev_len++;
    }
    printf("\n");
    printf("%d\n", prev_len);
    for (int i = len - 2; i >= 0; i -= 2)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}