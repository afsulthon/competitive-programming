#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10] = {0};
    while (n > 0)
    {
        if (arr[n % 10] == 1)
        {
            puts("YES");
            return 0;
        }
        else
            arr[n % 10] = 1;
        n /= 10;
    }
    puts("NO");
    return 0;
}