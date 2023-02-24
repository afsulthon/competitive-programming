#include <cstdio>
using namespace std;

int main()
{
    int R1, R2, P1, P2;
    scanf("%d %d %d %d", &R1, &R2, &P1, &P2);
    if (R1 == P1 || R2 == P2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
} 