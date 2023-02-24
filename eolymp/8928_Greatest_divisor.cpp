#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    bool flag = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", n / i);
            flag = true;
            break;
        }
    }
    if (!flag)
        puts("1");
    return 0;
}