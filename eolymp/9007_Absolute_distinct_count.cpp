#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], num, count = 0;
    while (n--)
    {
        bool found = false;
        scanf("%d", &num);
        if (num < 0)
            num = -num;
        for (int i = 0; i < count; i++)
            if (arr[i] == num)
            {
                found = true;
                break;
            }
        if (!found)
            arr[count++] = num;
    }
    printf("%d\n", count);
    return 0;
}