#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    scanf("%s", str);
    int max = str[0];
    for (int i = 1; i < strlen(str); i++)
        if (str[i] > max)
            max = str[i];
    printf("%c ", max);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == max)
            count++;
    printf("%d\n", count);
    return 0;
}