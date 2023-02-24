#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a <= b)
        puts("0");
    else
        puts("1");
    return 0;
}