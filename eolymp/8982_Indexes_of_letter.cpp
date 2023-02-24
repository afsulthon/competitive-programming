#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            printf("%d ", i);
            count++;
        }
    }
    if (count == 0)
        puts("-1");
    return 0;
}