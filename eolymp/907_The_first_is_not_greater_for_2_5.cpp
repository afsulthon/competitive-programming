#include <cstdio>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    double num;
    for (int i = 0; i < t; i++)
    {
        scanf("%lf", &num);
        if (num <= 2.5)
        {
            printf("%d %.2lf\n", i + 1, num);
            return 0;
        }
    }
    puts("Not Found");
    return 0;
}