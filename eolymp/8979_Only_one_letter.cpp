#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[205];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == 'a')
        {
            printf("a");
            count++;
        }
    if (count == 0)
        puts("-1");
    return 0;
}