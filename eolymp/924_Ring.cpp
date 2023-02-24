#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double A, R1, R2;
    scanf("%lf %lf", &A, &R1);
    R2 = sqrt(pow(R1, 2) - (A / 3.141592));
    printf("%.2lf", R2);
    return 0;
}