#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
    }
    int flag = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 0)
            if (flag == 0)
                count++;
            else
                flag--;
        else if (s[i] == 1)
        {
            count++;
            flag++;
        }
    }
    printf("%d\n", count);
    return 0;
}