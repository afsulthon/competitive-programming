#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int num, count = 0, sum = 0;
    while (n--)
    {
        scanf("%d", &num);
        if (num > 0 && num % 6 == 0)
        {
            sum += num;
            count++;
        }
    }
    printf("%d %d", count, sum);
    return 0;
}