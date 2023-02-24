#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    bool is_prime = true;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    if (is_prime)
        puts("1");
    else
        puts("0");
    return 0;
}