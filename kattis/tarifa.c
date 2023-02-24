#include <stdio.h>

int main()
{
    int X, N, P, sum = 0;
    scanf("%d %d", &X, &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &P);
        sum += P;
    }
    printf("%d\n", X * (N + 1) - sum);
    return 0;
}