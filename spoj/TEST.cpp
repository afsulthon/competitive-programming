#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    while (n != 42)
    {
        printf("%d\n", n);
        scanf("%d", &n);
    }
}