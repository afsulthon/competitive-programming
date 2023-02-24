#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[10] = {0};
    while (n > 0)
    {
        arr[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == 3)
        {
            puts("YES");
            return 0;
        }
    }
    puts("NO");
    return 0;
}