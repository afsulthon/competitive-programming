#include <cstdio>
using namespace std;

int main()
{
    char str[100];
    scanf("%s", str);
    if (str[0] == '-')
        printf("%c", str[1]);
    else
        printf("%c", str[0]);
    return 0;
}

/*
Another alternative using math:

#include <cstdio>
#include <cmath>

int main()
{
    long long n;
    scanf("%lld", &n);
    while (abs(n) > 9)
        n /= 10;
    printf("%lld\n", abs(n));
    return 0;
}
*/