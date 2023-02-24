#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    char s[10000];
    int sum = 0, number = 0, n = 1;
    scanf("%s", s);
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        if (s[i] == '+')
        {
            sum += number;
            n = 1;
            number = 0;
        }
        else if (s[i] == '-')
        {
            sum -= number;
            n = 1;
            number = 0;
        }
        else
        {
            number += ((int)s[i] - 48) * n;
            n *= 10;
            if (i == 0)
                sum += number;
        }
    }
    printf("%d\n", sum);
    return 0;
}