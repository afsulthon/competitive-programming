#include <cstdio>
using namespace std;

void derivate(int base, int power)
{
    if (power == 1)
        printf("%d", base);
    else if (power == 2)
        printf("%dx", power * base);
    else
        printf("%dx^%d", power * base, power - 1);
}

int main()
{
    int a, b, c, p, q, r;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &p, &q, &r);
    printf("Turunan = ");
    if (p == q && q == r)
    {
        derivate(a + b + c, p);
    }
    else if (p == q && q != r)
    {
        derivate(a + b, p);
        printf("+");
        derivate(c, r);
    }
    else if (q == r && r != p)
    {
        derivate(a, p);
        printf("+");
        derivate(b + c, q);
    }
    else if (p == r && r != q)
    {
        derivate(b, q);
        printf("+");
        derivate(a + c, p);
    }
    else
    {
        derivate(a, p);
        printf("+");
        derivate(b, q);
        printf("+");
        derivate(c, r);
    }
    return 0;
}