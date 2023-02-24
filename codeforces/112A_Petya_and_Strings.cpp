#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str1[105], str2[105];
    scanf("%s %s", str1, str2);
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = str1[i] >= 'a' && str1[i] <= 'z' ? str1[i] - 32 : str1[i];
        str2[i] = str2[i] >= 'a' && str2[i] <= 'z' ? str2[i] - 32 : str2[i];
        if (str1[i] > str2[i])
        {
            puts("1");
            return 0;
        }
        else if (str1[i] < str2[i])
        {
            puts("-1");
            return 0;
        }
    }
    puts("0");
    return 0;
}