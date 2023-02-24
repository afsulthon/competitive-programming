#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char n[51];
        scanf("%s", n);
        int sum = 0;
        for (int i = 0, length = strlen(n); i < length; i++)
        {
            sum += (int)n[i] - 48;
        }
        printf("%d\n", sum);
    }
    return 0;
}