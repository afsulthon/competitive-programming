#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    bool flag = false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            printf("%d\n", i);
            flag = true;
            break;
        }
    }
    if (!flag)
        printf("%d\n", n);
    return 0;
}