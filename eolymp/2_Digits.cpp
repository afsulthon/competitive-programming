#include <cstdio>
using namespace std;

int main()
{
    int number, digit_counter = 0;
    scanf("%d", &number);
    do
    {
        number /= 10;
        digit_counter++;
    }
    while (number != 0);
    printf("%d\n", digit_counter);
    return 0;
}

// another alternative using log10 approach:
/*
#include <cmath>
int main()
{
    int number;
    scanf("%d", &number);
    if (number == 0) {
        puts("1");
        return 0;
    }
    int digits = log10(number) + 1;
    printf("%d\n", digits);
    return 0;
}
*/
