#include <stdio.h>

int main()
{
    int W, N;
    scanf("%d %d", &W, &N);
    int total = 0;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        total += x * y;
    }
    printf("%d\n", total / W);
    return 0;
}