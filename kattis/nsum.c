#include <stdio.h>

int main()
{
    int N, number, sum = 0;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d", &number);
        sum += number;
    }
    printf("%d\n", sum);
    return 0;
}