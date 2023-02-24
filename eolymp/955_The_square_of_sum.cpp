#include <cstdio>
using namespace std;

int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = n % 10 + (n / 10) % 10 + (n / 100) % 10 + n / 1000;
    printf("%d\n", sum * sum);
    return 0;
}