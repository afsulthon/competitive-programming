#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 0)
        puts("Positive");
    else if (n < 0)
        puts("Negative");
    else
        puts("Zero");
    return 0;
}