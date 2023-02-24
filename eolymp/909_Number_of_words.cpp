#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[251];
    int count = 0;
    fgets(str, 251, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' && str[i + 1] != ' ')
            count++;
    }
    printf("%d\n", count + 1);
    return 0;
}