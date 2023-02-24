#include <cstdio>
#include <cmath>
using namespace std;

void print(double num)
{
    if (num == (int)num)
        printf("%d", (int)num);
    else
        printf("%.2lf", num);
}

int main()
{
    double a, b, c, disc, root1, root2, realPart, imagPart;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0)
    {
        if (b == 0)
        {
            return 0;
        }
        else if (c == 0)
        {
            printf("0");
            return 0;
        }
        else
        {
            root1 = -c / b;
            print(root1);
            return 0;
        }
    }
    disc = b * b - 4 * a * c;
    if (disc > 0)
    {
        root1 = (-b - sqrt(disc)) / (2 * a);
        root2 = (-b + sqrt(disc)) / (2 * a);
        print(root1);
        printf(" ");
        print(root2);
    }
    else if (disc == 0)
    {
        root1 = root2 = (-b + sqrt(disc)) / (2 * a);
        print(root1);
    }
    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-disc) / (2 * a);
        if (realPart != 0)
            print(realPart);
        printf("-");
        if (imagPart != 1)
            print(abs(imagPart));
        printf("i ");
        if (realPart != 0)
        {
            print(realPart);
            printf("+");
        }
        if (imagPart != 1)
            print(abs(imagPart));
        printf("i");
    }
    return 0;
}