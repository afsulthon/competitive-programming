#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int sum = n / 100 + (n / 10) % 10 + n % 10;
    int product = (n / 100) * ((n / 10) % 10) * (n % 10);
    printf("%d %d\n", sum, product);
    return 0;
}