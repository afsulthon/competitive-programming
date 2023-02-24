#include <cstdio>
using namespace std;

int main()
{
    int B, A, sumB = 0, sumA = 0;
    scanf("%d.%d", &B, &A);
    if (B < 0)
        B *= -1;
    while (B > 0)
    {
        sumB += B % 10;
        B /= 10;
    }
    while (A > 0)
    {
        sumA += A % 10;
        A /= 10;
    }
    if (sumA == sumB)
        puts("Yes");
    else
        puts("No");
    return 0;
}