#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    fgets(str, 1005, stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        int a = 0, b = 0;
        for (int j = 0; j < strlen(str); j++)
            if (str[j] == str[i])
                a++;
        for (int j = 0; j < i; j++)
            if (str[i] == str[j])
                b++;
        if (a > 1 && b < 1)
        {
            printf("%c", str[i]);
            count++;
        }
    }
    if (count == 0)
        puts("NO");
    return 0;
}