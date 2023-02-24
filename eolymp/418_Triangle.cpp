#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    double S1, S2, S3, P1, P2, P3, res;
    scanf("%lf %lf %lf", &S1, &S2, &S3);
    P1 = pow(sqrt(S1) + sqrt(S2), 2) - S1 - S2;
    P2 = pow(sqrt(S2) + sqrt(S3), 2) - S2 - S3;
    P3 = pow(sqrt(S1) + sqrt(S3), 2) - S1 - S3;
    res = S1 + S2 + S3 + P1 + P2 + P3;
    printf("%.8lf", res);
    return 0;
}