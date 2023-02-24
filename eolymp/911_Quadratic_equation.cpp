#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, D, root1, root2;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0)
        return 0;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        if (root1 > root2)
            swap(root1, root2);
        printf("Two roots: %d %d", root1, root2);
    }
    else if (D == 0)
    {
        root1 = -b / (2 * a);
        printf("One root: %d", root1);
    }
    else
        puts("No roots");
    return 0;
}