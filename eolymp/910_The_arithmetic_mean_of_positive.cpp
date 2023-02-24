#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    double num, sum = 0;
    int count = 0;
    while (n--)
    {
        scanf("%lf", &num);
        if (num > 0)
        {
            sum += num;
            count++;
        }
    }
    if (count > 0)
        printf("%.2lf\n", sum / count);
    else
        puts("Not Found");
    return 0;
}