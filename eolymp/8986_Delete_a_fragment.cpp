#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char str[1005];
    int n, m;
    fgets(str, 1005, stdin);
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++)
        printf("%c", str[i]);
    for (int i = m + 1; i < strlen(str); i++)
        printf("%c", str[i]);
    return 0;
}