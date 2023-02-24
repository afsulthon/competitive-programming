#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == ' ')
        {
            printf("%d ", i);
            count++;
            break;
        }
    for (int i = strlen(str) - 1; i >= 0; i--)
        if (str[i] == ' ')
        {
            printf("%d ", i);
            count++;
            break;
        }
    if (count == 0)
        puts("-1");
    return 0;
}