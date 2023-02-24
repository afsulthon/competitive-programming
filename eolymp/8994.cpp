#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str1[1005], str2[1005];
    fgets(str1, 1005, stdin);
    fgets(str2, 1005, stdin);
    int count = 0;
    for (int i = 0; i < strlen(str2); i++)
        for (int j = 0; j < strlen(str1); j++)
            if (str1[j] == str2[i])
            {
                count++;
                break;
            }
    if (count == strlen(str2))
        printf("Ok");
    else
        printf("No");
    return 0;
}