#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char str[100];
    for (int i = 0; i < N; i++)
    {
        scanf("%s", str);
        if (i % 2 == 0)
            printf("%s\n", str);
    }
    return 0;
}