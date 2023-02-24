#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    double N1, N2;
    while (N--)
    {
        scanf("%lf %lf", &N1, &N2);
        printf("%.4lf %.4lf\n", N1 + N2, N1 * N2);
    }
    return 0;
}