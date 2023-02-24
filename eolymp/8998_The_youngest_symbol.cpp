#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    scanf("%s", str);
    int min = str[0];
    for (int i = 1; i < strlen(str); i++)
        if (str[i] < min)
            min = str[i];
    printf("%c ", min);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == min)
            count++;
    printf("%d\n", count);
    return 0;
}