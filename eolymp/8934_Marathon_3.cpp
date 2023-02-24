#include <cstdio>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = b; i >= a; i--)
        printf("%d ", i);
    return 0;
}