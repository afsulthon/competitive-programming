#include <stdio.h>

int main()
{
    int N, W, H;
    scanf("%d %d %d", &N, &W, &H);
    int max = W * W + H * H;
    for (int i = 0; i < N; i++)
    {
        int x;
        scanf("%d", &x);
        if (x * x <= max)
            printf("DA\n");
        else
            printf("NE\n");
    }
    return 0;
}