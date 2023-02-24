#include <cstdio>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    if (N % 24 == 0)
        printf("%d %d %d", 13 * N / 24, 7 * N / 24, 4 * N / 24);
    else
        puts("-1");
    return 0;
}