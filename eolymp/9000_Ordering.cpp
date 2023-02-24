#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    char str[205];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++)
        for (int j = i + 1; j < len; j++)
            if (str[i] > str[j])
                swap(str[i], str[j]);
    printf("%s", str);
    return 0;
}