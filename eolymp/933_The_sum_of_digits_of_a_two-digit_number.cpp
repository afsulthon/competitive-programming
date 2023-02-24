#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", abs(n / 10) + abs(n % 10));
    return 0;
}