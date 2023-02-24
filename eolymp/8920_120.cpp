#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int num = 1;
    while (n)
    {
        if (num % 2 != 0 && num % 3 != 0 && num % 5 != 0)
        {
            printf("%d ", num);
            n--;
        }
        num++;
    }
    return 0;
}