#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[100];
    gets(str);
    bool num[10] = {false};
    int used = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            if (num[str[i] - 48] == false)
            {
                num[str[i] - 48] = true;
                used++;
            }
        }
    }
    printf("%d\n", 10 - used);
    for (int i = 0; i < 10; i++)
    {
        if (num[i] == false)
        {
            printf("%d ", i);
        }
    }
    return 0;
}