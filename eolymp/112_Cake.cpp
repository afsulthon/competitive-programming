#include <cstdio>
using namespace std;

int main()
{
    int t1, t2, t3;
    scanf("%d %d %d", &t1, &t2, &t3);
    double time = 1.00 / (1.00 / (double)t1 + 1.00 / (double)t2 + 1.00 / (double)t3);
    printf("%.2lf", time);
    return 0;
}