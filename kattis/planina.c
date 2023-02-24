#include <stdio.h>

int main()
{
    int N, sidePoints = 2;
    scanf("%d", &N);
    while (N--)
        sidePoints += sidePoints - 1;
    printf("%d\n", sidePoints * sidePoints);
    return 0;
}