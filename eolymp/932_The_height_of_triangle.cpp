#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int S, a;
    scanf("%d %d", &S, &a);
    double height = (-a + sqrt(a * a + 8 * S)) / 2;
    printf("%.2lf", height);
    return 0;
}