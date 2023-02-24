#include <cstdio>
using namespace std;

int main()
{
    double x, y, z, sum, product;
    scanf("%lf %lf %lf", &x, &y, &z);
    sum = x + y + z;
    product = x * y * z;
    printf("%.4lf %.4lf", sum, product);
    return 0;
}