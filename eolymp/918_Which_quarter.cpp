#include <cstdio>
using namespace std;

int main()
{
    float x, y;
    int quarter;
    scanf("%f %f", &x, &y);
    if (x > 0.0 && y > 0.0)
        quarter = 1;
    else if (x < 0.0 && y > 0.0)
        quarter = 2;
    else if (x < 0.0 && y < 0.0)
        quarter = 3;
    else if (x > 0.0 && y < 0.0)
        quarter = 4;
    else
        quarter = 0;
    printf("%d", quarter);
    return 0;
}