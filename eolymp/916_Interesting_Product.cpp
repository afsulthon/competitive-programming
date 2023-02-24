#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
        swap(a, b);
    if (c > d)
        swap(c, d);
    bool exist[b * d + 1] = {false};
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        for (int j = c; j <= d; j++)
        {
            if (exist[i * j] == false)
            {
                count++;
                exist[i * j] = true;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}